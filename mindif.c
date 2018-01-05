#include<stdio.h>
int main(void)
{
int a[5]={3,6,10,12,9};
int i,j,x,y,diff,min=1;
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(a[i]>a[j])
diff=a[i]-a[j];
else
diff=a[j]-a[i];
if(diff<=min)
{
min=diff;
x=a[i];
y=a[j];
}
}
}
printf("min diff is between %d and %d",x,y);
}
