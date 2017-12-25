#include <stdio.h>
int main(void) 
{
	char str[50];
	int count[256]={0},max=0,i,len;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		count[str[i]]++;
	}
	for(i=0;i<256;i++)
	{
		if(count[i]>count[max])
		{
		max=i;
		}
	}
	printf("%c",max);
	return 0;
}
