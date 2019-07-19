#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	int size=argc-1;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		arr[i] = atoi(argv[i+1]);
	}
	printf("Before reversing array\n");
	for(int i=0;i<(size);i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("Before reversing array\n\n");
	int temp,size1=size-1;
	for(int i=0;i<((size-1)/2);i++)
	{
		temp=arr[size1];
		arr[size1]=arr[i];
		arr[i]=temp;
		size1--;
	}
	for(int i=0;i<(size);i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}