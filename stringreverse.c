#include <stdio.h>

int main()
{
    char s[20];
    int i,l=0;
    gets(s);
    while(s[i]!='\0')
    {
        l++;
        i++;
    }
    for(i=l-1;i>=0;i--)
    {
        printf("%c",s[i]);
    }

    return 0;
}
