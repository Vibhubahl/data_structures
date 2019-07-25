#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,*arr,swap;
    printf("Enter size of array\n");
    scanf("%d",&size);
    arr=(int*)calloc(size,sizeof(int));
    printf("Enter Elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap=arr[j];
                arr[j]   = arr[j+1];
                arr[j+1] = swap;
            }
        }
    }
    printf("Orignal array :\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}