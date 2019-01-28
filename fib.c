#include<stdio.h>
void main()
{
    int f1=1,f2=1,f3,i,a;
    scanf("%d",&a);
    printf("%d %d ",f1,f2);
    f3=f1+f2;
    printf("%d ",f3);
    for(i=3;i<a;i++)
    {
        f1=f2;
        f2=f3;
        f3=f1+f3;
    printf("%d ",f3);
    }
getch();
}
