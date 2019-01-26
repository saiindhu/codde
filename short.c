#include <stdio.h>

void main()
{
    int a[100],i,n,j,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    
        scanf("%d",&a[i]);
    }t=0;
    for(i=0;i<n;i++)
    {
     for(j=i;j<n;j++)
     {
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    }
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
    getch();
}
