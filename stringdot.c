#include<stdio.h>
void main()
{
    char s[20];
    int i=0,j,t=0;
    scanf("%s",s);
    while(s[i]!='\0')
    {
        t++;
        i++;
    }
    for(i=0;i<=t;i++)
    {
        printf("%c",s[i]);
        if(i==t)
        {
            printf(".");
        }
    }
    getch();
}
