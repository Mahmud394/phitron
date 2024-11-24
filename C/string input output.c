#include<stdio.h>
int main ()
{
    char str[200];
    
    //scanf("%s",str);
    //scanf("%[^\n]s",str);
    //gets(str);
    fgets(str, sizeof(str), stdin);

    //puts(str);
    fputs(str,stdout);
   // printf("%s",str);

   char str1[]="Bangladesh is a beautiful country";
   puts(str1);
   char str3[]="Bangladesh is a \"beautiful\" country";
   puts(str3);
}