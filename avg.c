#include <stdio.h>

void main()
{
    int a[20],sum=0,i,n,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      sum=sum+a[i];
    } 
      avg=sum/n;
      printf("%d",avg);
    getch();
}
