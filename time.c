#include <stdio.h>
int main(void) 
{
int h1,h2,m1,m2,h,l,tot1,tot2,hour,min;
int diff,rem;
scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
h=h1*60;
l=h2*60;
tot1=h+m1;
tot2=l+m2;
diff=tot2-tot1;
hour=diff/60;
min=diff%60;
printf("%d minutes",diff);
printf("(%d:%d)",hour,min);
return 0;
}
