#include <stdio.h>

void main()
{
 int ch;
 scanf("%c",&ch);
 if((ch>=65 && ch<=91) || (ch>=97 && ch<=122))
 {
     if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
     {
         printf("Vowel");
     }
     else
     {
         printf("Consonant");
     }
 }
 else
 {
     printf("Invalid");
 }
 getch();
}
