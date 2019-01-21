#include <stdio.h>
void main()
{
    int a,b,z,l=0,c,r,d=1,e=0;
    scanf("%d",&a);
    b=a;
    z=a;
    while(a)
    {
        a=a/10;
        l++;
    }
    while(b)
    {
        d=1;
        c=l;
        r=b%10;
        while(c)
        {
            d=d*r;
            c--;
        }
        b=b/10;
        e=e+d;
    }    
    if(e==z)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    getch();
}
