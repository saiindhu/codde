#include<stdio.h>
void main()
{
char str[50],i,c=0;
gets(str);
for(i=0;str[i]!='\0';i++)
{
c++;
}
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' ')
{
    c-=1;
}
}
printf("%d",c);
getch();
}
