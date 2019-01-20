#include <stdio.h>

void main()
{
  int a,temp,s=0,r;
 scanf("%d",&a);
 temp=a;
 while(temp)
 {
     r=temp%10;
     s=s*10+r;
     temp=temp/10;
 }
 if(s==a)
 {
     printf("Yes");
 }
 else
 {
     printf("No");
 }
  getch();
}
