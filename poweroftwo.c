#include <stdio.h>
int main(void) 
{
	int n,count=0,temp;
	scanf("%d",&n);
	temp=n;
	while(temp!=1)
	{
		if(temp%2!=0)
		{
			count++;
			break;
		}
		temp=temp/2;	
	}
	if(count==0)
	printf("\n %d is power of 2",n);
	else
	printf("\n%d is not power of 2",n);
	return 0;
}
