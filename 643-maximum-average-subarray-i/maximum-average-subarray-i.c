double findMaxAverage(int* nums, int numsSize, int k) {
    int left=1,right=k,sum=0,s;
    double avg;
    for(int i=0;i<k;i++){
        sum=sum+nums[i];    
        }
    s=sum;    
    while(right<numsSize){
        sum=sum-nums[left-1]+nums[right];
        if(sum>s){
            s=sum;
        }
        left=left+1;
        right=right+1;
    }
    avg=(double)s/k;
    return avg;
}