#include <stdio.h>

int main() {
    int N, digit1, digit2;
    
    // Input the two-digit number
    scanf("%d", &N);
    
    // Extract the digits
    digit1 = N / 10;   // tens place
    digit2 = N % 10;   // units place

    // Check if one digit is divisible by the other
    if (digit2 != 0 && (digit1 % digit2 == 0)) {
        printf("YES\n");
    } else if (digit1 != 0 && (digit2 % digit1 == 0)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
