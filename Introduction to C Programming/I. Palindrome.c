#include<stdio.h>
int main ()
{
    char s[1000];
    scanf("%s",s);
    char s1[1000];
    int n=strlen(s);
     for(int i=0, j=n-1;i<n;i++,j--)
    {
            s1[j]=s[i];
    }
    s1[n]='\0';
    //strrev(s);
    for(int i=0;i<n;i++)
    {
        if(s[i]!=s1[i])
        {
            printf("NO");
            return 0;
        }
       

    }
    
     printf("YES");
    }


// #include<stdio.h>
// int main ()
// {
//     char s[1000];
//      scanf("%s", s);
//     char s1[1000];
//     int n=strlen(s);
//      for (int i = 0; i < n; i++) {
//         s1[i] = s[n - 1 - i];
//     }
//     s1[n]='\0';
//     if (strcmp(s, s1) == 0) {
//         printf("YES\n");
//     } else {
//         printf("NO\n");
//     }
// }
