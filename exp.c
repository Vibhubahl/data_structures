#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[] = {1,2,3,4};
	int *b = a;
	for(int i=0;i<4;i++)
	{
		printf("%u\n",*(b+i));
	}
	return 0;
}