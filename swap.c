#include <stdio.h>
    int main(void)
    {
    char str[30];
    char temp;
    int i,len;
    gets(str);
    len=strlen(str);
    if(len%2==0)
    {
    for(i=0;i<len;i+=2)
    {
    temp=str[i];
    str[i]=str[i+1];
    str[i+1]=temp;
    }
    }
    else
    {
   for(i=0;i<len-1;i+=2)
    {
    temp=str[i+1];
    str[i+1]=str[i];
    str[i]=temp;
    }
    }
    printf("%s",str);
    return 0;
    }
