#include<stdio.h>
#include<string.h>
int main (){
    char s[10];
    char s1[10];
    char s2[30];
    scanf("%s",&s);
    scanf("%s",&s1);
    printf("%d %d\n",strlen(s),strlen(s1));
    strcpy(s2,s);
    strcat(s2,s1);
    printf("%s\n",s2);
    
    char temp=s[0];
    s[0]=s1[0];
    s1[0]=temp;

    printf("%s %s\n",s,s1);
    return 0;

}