#include<stdio.h>
void main()
{
    int a,m=0,r;
    scanf("%d",&a);
    while(a)
    {
        r=a%10;
        a=a/10;
    m+=r;
    }
    printf("%d",m);
    getch();
}
