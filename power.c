#include <stdio.h>

void main()
{
  int n,k,s=1,i;
 scanf("%d%d",&n,&k);
for(i=0;i<k;i++)
 { 
     s*=n;
 }
 printf("%d",s);
 getch();
}
