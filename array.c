#include <stdio.h>

void main()
{
 int i,n,sum=0,k,a[10];
 scanf("%d%d",&n,&k);
 for(i=0;i<n;i++)
 {
    scanf("%d",&a[i]);
 }
 sum=0;
 for(i=0;i<=k;i++)
 {
     sum=sum+a[i];
 }
 printf("%d",sum);
 getch();
}
