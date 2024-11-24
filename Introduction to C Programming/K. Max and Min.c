#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    //minimum
    if(A<=B){
        //A,C
        if(A<=C)
        {
            printf("%d",A);
        }
        else{
            printf("%d",C);  
              }
                    
    }
    else{
        //B,C
        if(B<=C)
        {
            printf("%d",B);
        }
        else{
            printf("%d",C);
        }
    }

    printf(" ");

    //Maximum
    if(A>=B && A>=C)
    {
        printf("%d",A);
    }
    else if (B>=A && B>=C)
    {
        printf("%d",B);
    }
    else{
        printf("%d",C);
    }


    // int min_value = A;
    // int max_value = A;
    
    // if (B < min_value) {
    //     min_value = B;
    // }
    // if (C < min_value) {
    //     min_value = C;
    // }
    
    // if (B > max_value) {
    //     max_value = B;
    // }
    // if (C > max_value) {
    //     max_value = C;
    // }
    
    // printf("%d %d\n", min_value, max_value);
    
    return 0;
}
