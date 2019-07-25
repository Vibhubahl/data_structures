#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,*arr,swap,first,last,middle;
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
    printf("Enter number to search\n");
    scanf("%d",&swap);
    first = 0;
    last = size - 1;
    middle = (first+last)/2;
    while (first <= last)
    {
          if (arr[middle] < swap)
          {
              first = middle + 1;
          }
          else if (arr[middle] == swap)
          {
             printf("\n%d found at location %d.\n", swap, middle+1);
             break;
          }
          else
          {
             last = middle - 1;
          }
          middle = (first + last)/2;
    }
    if (first > last)
    {
        printf("\nNot found!\n");
    }
    return 0;
}