#include <stdio.h>

void main()
{
  int a,flag=0,i;
 scanf("%d",&a);
for(i=2;i<a;i++)
{
    if(a%i==0)
    {
        flag=1;
    }
}
 if(flag==0)
 {
     printf("Yes");
 }
 else
 {
     printf("No");
 }
  getch();
}

