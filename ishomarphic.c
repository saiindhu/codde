#include <stdio.h>

void main()
{
    char s[50],s1[50];
    int i,j,c=0,c1=0,r=0;
    scanf("%s %s",s,s1);
    for(i=0;s[i]!=NULL;i++)
    {
        c++;
    }
    for(i=0;s1[i]!=NULL;i++)
    {
        c1++;
    }
    if(c==c1)
    {
        
    for(i=0;i<c;i++)
    {
            
        if((a[i]==a[i+1]) &&(b[i]==b[i+1]))
        {
            r++;
        }
        else if((a[i]!=a[i+1]) &&(b[i]!=b[i+1]))
        {
            r++;
        }
    }
    if(r==c)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    }
    else
    {
        printf("no");
    }
}
