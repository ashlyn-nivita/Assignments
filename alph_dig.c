#include <stdio.h>
int main(void) 
{
	char str[50];
	int digit=0,alph=0,i;
	scanf("%s",str);
	for(i=0;str[i]!=NULL;i++)
	{
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
		alph++;
		else if(str[i]>='1' && str[i]<='9')
		digit++;
	}
	printf("Digits:%d\nAlphabets:%d",digit,alph);
	return 0;
}

