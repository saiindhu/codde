#include <stdio.h>

void main()
{
    int b[100],min,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    
        scanf("%d",&b[i]);
    }min=b[0];
    for(i=0;i<n;i++)
    {
        if(b[i]<min)
        {
            min=b[i];
        }
    }
    printf("%d",min);
    getch();
}
