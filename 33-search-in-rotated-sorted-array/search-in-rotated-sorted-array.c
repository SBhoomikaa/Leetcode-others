int binvar(int *nums,int beg,int end,int target){
    if(beg>end)
        return -1;
    int mid=beg+(end-beg)/2,temp;
    if(nums[mid]==target)
        return mid;
    if(nums[beg]>nums[end]){
        if(nums[beg]<=nums[mid]){
            if(target>=nums[beg] && target<nums[mid])
                return binvar(nums,beg,mid-1,target);
            else
                return binvar(nums,mid+1,end,target);   
        }
        else{
            if(target>nums[mid] && target<=nums[end])
                return binvar(nums,mid+1,end,target); 
            else
                return binvar(nums,beg,mid-1,target);   
        }  
    }
    else{
        if(nums[mid]>target)
            return binvar(nums,beg,mid-1,target);
        else
            return binvar(nums,mid+1,end,target);       
    }         
}
int search(int* nums, int numsSize, int target) {
    return binvar(nums,0,numsSize-1,target);
}