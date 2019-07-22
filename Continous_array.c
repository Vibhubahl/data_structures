#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,start,end,count=0,temp,count1=0;
    printf("Enter size of array\n");
    scanf("%d",&size);
    int *arr = (int*)calloc(size,sizeof(int));
    printf("Enter elements\n");
    for(int offset=0;offset<size;offset++)
    {
        scanf("%d",&arr[offset]);
    }
    printf("\nContinous arrays are :\n\n");
    for(int offset=0;offset<size;offset++)
    {
        temp=arr[offset];
        count=0;
        for(int offset1=offset+1;offset1<size;offset1++)
        {
            if(temp+1==arr[offset1])
            {
                temp = arr[offset1];
                start=offset;
                end=offset1;
                count++;
            }
            else
            {
                break;
            }
        }
        if(count!=0)
        {
            count1++;
            printf("%d : ",count1);
            for(int offset2=start;offset2<=end;offset2++)
            {
                printf("%d  ",arr[offset2]);
            }
            printf("\n");
        }
    }
    return 0;
}
