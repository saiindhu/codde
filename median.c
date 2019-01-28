#include<stdio.h>
void main()
{
    int a[10],i,n,k,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    k=sum/n;
    printf("%d",k);
    
}
