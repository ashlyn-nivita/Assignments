#include<stdio.h>
int main(void)
{
int a[7]={2,3,7,6,5,4,1};
int i,max=0;
for(i=0;i<7;i++)
{
 if(a[i]>max)
 max=a[i];
 else
 break;
 }
 printf("max element:%d",max);
 }
