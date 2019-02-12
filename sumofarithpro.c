#include <stdio.h>

void main()
{
    int n,a,b,i,sum=0;
    scanf("%d",&n);
    scanf("%d %d",&a,&b);
    for(i=0;i<n;i++)
    {
        sum=(n*(2*a+(n-1)*b))/2;
    
    }
    printf("%d",sum);
    getch();
}
