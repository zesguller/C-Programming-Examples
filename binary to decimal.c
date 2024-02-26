#include <stdio.h>
#include <math.h> 


int converter(int binary)
{
	int remainder, i=0, decimal=0;
	
	while(binary !=0)
	{
		remainder=binary % 10;
		binary = binary / 10;
		decimal= decimal + remainder*pow(2,i);
		i++;
	}
	return decimal;
}

int main()
{
	int num;
	scanf("%d",&num);
	//converter(num);
	printf("%d",converter(num));
	return 0;
}
