#include<stdio.h>
void main()
{
char str[50];
int i,c=0;
gets(str);
for(i=0;str[i]!='\0';i++)
{
    if(str[i]>='0' && str[i]<='9')
    {
       c++;
    }
}
printf("%d",c);
getch();
}
