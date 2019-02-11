#include <stdio.h>

void main()
{
 int i,a=0,n,r=0,t,s=0;
 scanf("%d",&n);
 while(n)
 {
     a=n%10;
     r=(r*10)+a;
     n=n/10;
 }
 t=r;
 while(t)
 { 
     s=t%10;
     if(s%2!=0)
     {
         printf("%d ",s);
     }
     t=t/10;
 }
 getch();
 }
