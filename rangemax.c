#include<stdio.h>
void main()
{
    int a[10],max=a[0],i;
    for(i=0;i<=10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;a[i]!='\0';i++)
    {
    if(a[i]>max)
    {
        max=a[i];
    }
    }
    printf("%d",max);
getch();
}
