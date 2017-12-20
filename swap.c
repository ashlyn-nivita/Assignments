    #include <stdio.h>
    int main(void)
    {
    char str[30];
    char temp;
    int i,len;
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i+=2)
    {
    temp=str[i];
    str[i]=str[i+1];
    str[i+1]=temp;
    }
    printf("%s",str);
    }
     
