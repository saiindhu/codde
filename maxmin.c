#include <stdio.h>

void main()
{
    int a[20],max=a[0],min=a[0],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];min=a[0];
        for(i=0;i<n;i++)
        {
            if(max<a[i])
            {
                max=a[i];
            }
            if(min>a[i])
            {
                min=a[i];
            }
        }
        printf("%d\t",min);
        printf("%d",max);
        
    getch();
}
