#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,*arr,num;
    printf("Enter size of array\n");
    scanf("%d",&size);
    arr=(int*)calloc(size,sizeof(int));
    printf("Enter Elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter number\n");
    scanf("%d",&num);
    for(int i=0;i<size;i++)
    {
        for(int j=i;j<size;j++)
        {
            if(arr[i]+arr[j]==num)
            {
                printf("%d + %d : %d\n",arr[i],arr[j],num);
            }
        }
    }
    return 0;
}
