#include<stdio.h>


int main()
{
	int i;
	int num;
	int prev1=1;
	int prev2=0;
	int fibo=0;
	
	printf("fibonacci numbers until ");
	scanf("%d",&num);
	
	for(i=1; i<=num; i++)
	{
		if(i>2)
		{
			fibo = prev1+prev2;
			prev2=prev1;
			prev1=fibo;
			printf("%d ",fibo);
		}
		
		else if(i==1)
		{
			continue;
		}
		
		else if(i==2)
		{
			printf("%d ",prev1);
		}
	}
		
	return 0;
}
