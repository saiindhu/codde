#include<stdio.h>
void main()
{
    int a,l=0,r;
    scanf("%d",&a);
    while(a)
    {
        r=a%10;
        a=a/10;
        l++;
    }
    printf("%d",l);
    getch();
}
