#include<stdio.h>
void findodd(int[]);
void findeven(int[]);
int main(void)
{
int a[5]={5,3,7,6,13};
int oddcount=0,evencount=0;
int i;
for(i=0;i<5;i++)
{
if(a[i]%2==0)
evencount++;
else
oddcount++;
if(evencount>1 || oddcount>1)
break;
}
if(evencount>oddcount)
{
findodd(a);
}
else
{
findeven(a);
}
}
void findodd(int a[])
{
int i;
for(i=0;i<5;i++)
{
if(a[i]%2!=0)
break;
}
printf("The odd number is %d",a[i]);
}
void findeven(int a[])
{
int i;
for(i=0;i<5;i++)
{
if(a[i]%2==0)
break;
}
printf("The even number is %d",a[i]);
}
