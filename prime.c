#include <stdio.h>

void main()
{
  int a,temp=0,i;
 scanf("%d",&a);
for(i=2;i<a;i++)
{
    if(a%i==0)
    {
        temp=1;
    }
}
 if(temp==0)
 {
     printf("Yes");
 }
 else
 {
     printf("No");
 }
  getch();
}
