bool canJump(int* nums, int numsSize) {
    int i,j,max=0;
    for(i=0;i<numsSize;i++){
        if(i>max)return false;
        j=i+nums[i];
        max=(max<j)?j:max;
    }
    return true;
}