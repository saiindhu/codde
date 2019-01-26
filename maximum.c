#include <stdio.h>

void main()
{
    int a[100],max=0,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    //}
    //for(i=0;a[i]!='\0';i++)
    //{
        max=0;
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d",max);
    getch();
}
