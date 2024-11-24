#include<stdio.h>
#include<string.h>
int main()
{
    char s[100000];
   fgets(s, sizeof(s), stdin);
  // int n=strlen(s);
    for(int i=0;i<s[i] != '\0';i++)
    {
        if(s[i]==',')
        {
            printf(" ");
            continue;
        }
     else  if(s[i]>='a' && s[i]<='z')
        {
             printf("%c",s[i]-32);
            //s[i]-=32;
        }
       else if(s[i]>='A' && s[i]<='Z' )
        {
             printf("%c",s[i]+32);
           // s[i]+=32;
        }
        //printf("%c",s[i]);
    }
    return 0;
    
    

}