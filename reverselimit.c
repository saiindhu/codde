#include <stdio.h>
#include <conio.h>
void main()
{
    char a[40];
    int n,i,l=0,x=1,s=0;
    gets(a);
    scanf("%d",&n);
    
    for(i=0;a[i]!=NULL;i++)
    {
        l++;
    }
    s = l - n;
    while(s<=l)
    {
        printf("%c",a[s]);
        //l++;
        s++;
    }
    
    
    
    getch();
}

