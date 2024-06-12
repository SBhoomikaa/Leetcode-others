bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
   int i,j;
   for(i=0;i<matrixSize;i++)
   {
    if(target<=matrix[i][matrixColSize[i]-1])
    {   
        int beg=0,end=matrixColSize[i]-1,mid;
        while(beg<=end)
        {
            mid=(beg+end)/2;
           if(target==matrix[i][mid])
           return true;
           else if(target>matrix[i][mid])
            beg=mid+1;
            else
            end=mid-1;
        }
        return  false;
    }
    }
    return false;
   }
   