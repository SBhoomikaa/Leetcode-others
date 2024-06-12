void sortColors(int* nums, int numsSize) {
   int n=numsSize;
    int i,j=0,k=0;
    for(i=0;i<n;i++)
    switch(nums[i])
    {
        case 0:j++;
        break;
        case 1:k++;
        
    }
    for(i=0;i<n;i++)
    if(i<j)
    nums[i]=0;
    else if(i<j+k)
    nums[i]=1;
    else
    nums[i]=2;
}