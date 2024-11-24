#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
   scanf("%s",str);
    int n = strlen(str);
    
    printf("Subsequences of %s:\n", str);
    
    // Iterate through all possible subsequences using a loop
    for (int i = 0; i < (1 << n); i++) {
        // Print the current subsequence
        for (int j = 0; j < n; j++) {
            // Check if the j-th bit of i is set
            if (i & (1 << j)) {
                printf("%c", str[j]);
            }
        }
        printf("\n");  
    }

   
}
