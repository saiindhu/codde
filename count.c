#include<stdio.h>
void main()
{
    int a,c=0,r;
    scanf("%d",&a);
    while(a)
    {
        r=a%10;
        a=a/10;
        c++;
    }
    printf("%d",c);
    getch();
}
