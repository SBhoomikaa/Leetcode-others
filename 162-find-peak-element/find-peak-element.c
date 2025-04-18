
int findPeakElement(int* nums, int numsSize) {
    if(numsSize==1)
        return 0;
    long int beg=0,end=numsSize-1,mid,x,y;
    while(beg<=end){
        mid=beg+(end-beg)/2;
        if(mid==0){
            x=-2147483649;
            y=nums[1];
        }
        else if(mid==numsSize-1){
            x=nums[mid-1];
            y=-2147483649;}
        else{
            x=nums[mid-1];
            y=nums[mid+1];
        }    
        if(x<nums[mid] && y<nums[mid])
            return mid;
        else if(x>y)
            end=mid-1;
        else
            beg=mid+1;  
    }
    return -1;
}