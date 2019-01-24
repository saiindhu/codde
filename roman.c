#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
int j,sum=0;
clrscr();
scanf("%s",&a);
for(j=0;a[j]!='\0';j++)
{
if(a[j]=='I' || a[j]=='i')
{
sum=sum+1;
}
if(a[j]=='V' || a[j]=='v')
{
if(sum>0 && sum<10)
{
sum=5-sum;
}
else if(sum==11)
{
sum=sum+3;
}
else
{
sum=sum+5;
}}
if(a[j]=='X' || a[j]=='x')
{
if(sum>0 && sum<10)
{
sum=10-sum;
}
else if(sum==11)
{
sum=sum+8;
}
else
{
sum=sum+10;
}} }
printf("%d",sum);
getch();
}
