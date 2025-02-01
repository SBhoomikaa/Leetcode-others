bool isodd(int x){
    if(x%2==0)
        return 0;
    else 
        return 1;    
}
bool isArraySpecial(int* nums, int numsSize) {
    if(numsSize==1)
        return true;
    for(int i=0;i<numsSize-1;i++){
        if(isodd(nums[i])^isodd(nums[i+1]))
            continue;
        else
            return false;    
    }
    return true;
}