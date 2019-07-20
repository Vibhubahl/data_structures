#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Enter size of array\n");
    scanf("%d",&size);
    int *arr = (int*)calloc(size,sizeof(int));
    printf("Enter elements\n");
    for(int offset=0;offset<size;offset++)
    {
        scanf("%d",&arr[offset]);
    }
    int half=size/2;
    half--;
    int last,rtimes;
    printf("Enter how many times to right rotate array\n");
    scanf("%d",&rtimes);
    for(int offset=0;offset<rtimes;offset++)
    {
        last=arr[half];
        for(int offset1=half;offset1>0;offset1--)
        {
            arr[offset1]=arr[offset1-1];
        }
        arr[0]=last;
    }
    half++;
    printf("Enter how many times to left rotate array\n");
    scanf("%d",&rtimes);
    for(int offset=0;offset<rtimes;offset++)
    {
        last=arr[half];
        for(int offset1=half;offset1<size;offset1++)
        {
            arr[offset1]=arr[offset1+1];
        }
        arr[size-1]=last;
    }
    for(int offset=0;offset<size;offset++)
    {
        printf("%d  ",arr[offset]);
    }
    printf("\n");
    return 0;
}
