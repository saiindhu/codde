#include<stdio.h>
#include<conio.h>
void main()
{
char s[30];
int i,j,at=0,dot=0,con=0,l=0;
clrscr();
scanf("%s",&s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]=='@')
at++;
if(s[i]=='.')
dot++;
l++;
}
if(at==1&&dot==1)
con++;
at=0;
dot=0;
for(i=0;s[i]!='\0';i++)
{
if(s[i]=='.'){
dot++;
break;
}
if(s[i]=='@')  {
at++;
break;
}
}
if(at==1&&dot==0)
con++;
at=0;
dot=0;
for(i=0;s[i]!='\0';i++)
{
if(s[i]=='@')
break;
at++;
}
for(j=i+1;s[j]!='\0';j++)
{
if(s[j]=='.')
break;
dot++;
}
if(at>=3&&dot>=5)
con++;
if(s[l-1]=='m'&&s[l-2]=='o'&&s[l-3]=='c'&&s[l-4]=='.')
con++;
if(con==4)
printf("Valid");
else
printf("INVALID");
getch();
}
