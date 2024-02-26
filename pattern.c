#include<stdio.h>


int main()
{
	int i;
	int n = 10;
	int j;
	int k;
	
	for(i=1; i<n; i++)
	{
		j=i;
		for(k=1; k<=j; k++)
			printf("%d ", k);
		printf("\n");
	}
	
	
	return 0;
}
