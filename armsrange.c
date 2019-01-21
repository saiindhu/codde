#include <stdio.h>
void main()
{
    int i,b,z,l=0,c,r,d=1,e=0,x,y;
    scanf("%d%d",&x,&y);
   for(i=x+1;i<y;i++)
   {
       b=i;
       z=i;
    while(i)
    {
        i=i/10;
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
        printf("%d",i);
    }
    }
    getch();
}
