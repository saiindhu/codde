#include<stdio.h>
void main() 
{
char a[10];
scanf("%s",&a) ;
int k,i;
scanf("%d",&k);
for(i=0;i<k;i++) 
{
printf("%c", a[i]) ;
}
getch();
}
