#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Enter size of array\n");
    scanf("%d",&size);
    int *arr;
    arr=(int*)calloc(size,sizeof(int));
    for(int offset=0;offset<size;offset++)
    {
        scanf("%d",&arr[offset]);
    }
    int last,times;
    printf("Enter how many times to rotate\n");
    scanf("%d",&times);
    for(int offset=0;offset<times;offset++)
    {
        last=arr[size-1];
        for(int offset1=size-1;offset1>0;offset1--)
        {
            arr[offset1]=arr[offset1-1];
        }
        arr[0]=last;
    }
    printf("Rotated array :\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}