int timeRequiredToBuy(int* tickets, int ticketsSize, int k) {
    int i=0,t=0;
    if(tickets[k]==0)
    return 0;
    while(i<ticketsSize){
        if(tickets[i]==0 && i!=k){
            i=i+1;
            if(i==ticketsSize)
            i=0;
            continue;}    
        tickets[i]--;
        t=t+1;
        if(tickets[k]==0)
            break;
        i=i+1;
        if(i==ticketsSize)
        i=0;
    }
    return t;
}