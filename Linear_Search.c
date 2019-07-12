#include<stdio.h>
#include<stdlib.h>

int main()
{
	int size,num;
	printf("Enter Size\n");
	scanf("%d",&size);
	int *arr = (int*)calloc(size,sizeof(int));
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter Number to search\n");
	scanf("%d",&num);
	for(int i=0;i<size;i++)
	{
		if(num==arr[i])
		{
			printf("Index : %d\n",i);
			break;
		}
	}
}
