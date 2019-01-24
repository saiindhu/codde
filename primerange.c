#include <stdio.h>

void main()
{
  int a,temp=0,i,b,j;
 scanf("%d%d",&a,&b);
 for(i=a+1;i<b;i++)
 {
     temp=0;
for(j=2;j<i;j++)
{
    if(i%j==0)
    {
        temp=1;
    }
}
 if(temp==0)
 {
     printf("%d ",i);
 }
}
  getch();
}
