#include <stdio.h>
#include<string.h>
int main(void) 
{
  char s[100],t[100],temp;
  int len,i,j=0,l,m;
  gets(s);
  len=strlen(s);	
  l = 0;
  m = len-1;
  while (l < m) 
  {
      temp = s[l];
      s[l] = s[m];
      s[m] = temp;
      l++;
      m--;
  }
  for(i=0;i<len;i++)
{
	if((s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')||(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'))
	{
		t[j]='\0';
	}
	else
	{
		t[j]=s[i];
		j++;
	}
}
	strcpy(s,t);
	printf("%s",s);
	return 0;
}
