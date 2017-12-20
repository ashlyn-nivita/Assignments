#include<stdio.h>
int main(void)
{
char str[10];
int i,j,count,len;
gets(str);
len=strlen(str);
for(i=0;i<len;i++)
{
count=1;
if(str[i]=='+')
continue;
for(j=i+1;j<len;j++)
{
if(str[i]==str[j])
{
count++;
str[j]='+';
}
}
printf("%c-%d\t",str[i],count);
}
for(i=0;i<len;i++)
printf("%c",str[i]);
}
