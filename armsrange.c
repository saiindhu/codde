#include <stdio.h>
void main()
{
    int i,a,b,z,l=0,c,r,d=1,e=0,x,y;
    scanf("%d%d",&x,&y);
   for(i=x+1;i<y;i++)
   {
       b=i;
       a=i;
       z=i;
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
        printf("%d ",e);
       }
       l=0;
       e=0;
       d=1;
      
    }
    getch();
}
