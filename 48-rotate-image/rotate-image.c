void rotate(int** a, int matrixSize, int* matrixColSize) {
int i,j,temp;
for(i=0;i<matrixSize/2;i++)
{
    for(j=0;j<matrixSize;j++){
        temp=a[i][j];
        a[i][j]=a[matrixSize-1-i][j];
        a[matrixSize-1-i][j]=temp;

    }
}
//return;
for(i=0;i<matrixSize;i++)
{
    for(j=i;j<matrixSize;j++){
        temp=a[i][j];
        a[i][j]=a[j][i];
        a[j][i]=temp;
    }
}



}