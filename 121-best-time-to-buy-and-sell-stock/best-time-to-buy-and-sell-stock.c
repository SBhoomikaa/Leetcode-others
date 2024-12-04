//
int maxProfit(int* prices, int pricesSize) {
    int sell=0,buy=prices[0],i,temp=prices[0],k=0;
    for(i=1;i<pricesSize;i++){
        if(prices[i]<temp){
        temp=prices[i];
        k=0;
        continue;
        }
        if(prices[i]>temp){
       k=prices[i];}
        if(k-temp>sell-buy){
            buy=temp;
            sell=k;
        }
    }
    if(sell>buy)
    return sell-buy;
    return 0;
}