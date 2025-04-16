int search(int* nums, int numsSize, int target) {
    int beg=0,end=numsSize-1,mid;
    mid=beg+(end-beg)/2;
    while(beg<=end){
        mid=beg+(end-beg)/2;
        if(target==nums[mid])
            return mid;
        if(target>nums[mid])
            beg=mid+1;
        else
            end=mid-1;    
        
    }
    return -1;
}