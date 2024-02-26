#include<stdio.h>


int main()
{
	int num=146;
	int temp=num;
	int armstrng=0;
	int remainder;
 
	while(num>0)
	{
		remainder = num % 10;
		armstrng = armstrng + (remainder*remainder*remainder);
		num=num/10;
	}
	
	if(temp==armstrng)
		printf("yes");
	else
		printf("no");	
	
	return 0;
}
