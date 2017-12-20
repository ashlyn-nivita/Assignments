#include <stdio.h>
int main(void) 
{
int a[100],i,j,k,n,temp;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&k);
for(i=0;i<k;i++)
{
temp=a[0];
for(j=0;j<n-1;j++)
{
a[j]=a[j+1];
a[j+1]=temp;
}
}
for(j=0;j<n;j++)
{
printf("%d",a[j]);
}
return 0;
}
