#include<stdio.h>
int main(void)
{
int size,input[100],output,i,t=1;
scanf("%d",&size);
for(i=0;i<size;i++)
{
scanf("%d",&input[i]);
}
for(i=0;i<size;i++)
{
t=t*input[i];
}
for(i=0;i<size;i++)
{
output=t/input[i];
printf("\n%d",output);
}
}
