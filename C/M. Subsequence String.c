#include <stdio.h>

int main() {
    char s[10001];
    char target[] = "hello";
    int j = 0; 
    scanf("%s", s);

    // Loop through each character of the string S
    for (int i = 0; s[i] != '\0'; i++) {
        // If the current character matches the target character
        if (s[i] == target[j]) {
            j++;
            // If we have matched all characters of "hello"
            if (j == 5) {
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO\n");
    return 0;
}
