#include <stdio.h>

int main() {
    int N; 
    scanf("%d", &N);

    for (int t = 0; t < N; t++) {
        char S[51], T[51], result[102]; 
        int i = 0, j = 0, k = 0;

        scanf("%s %s", S, T);

        while (S[i] != '\0' && T[j] != '\0') {
            result[k++] = S[i++]; 
            result[k++] = T[j++]; 
        }

        while (S[i] != '\0') {
            result[k++] = S[i++];
        }

        while (T[j] != '\0') {
            result[k++] = T[j++];
        }

        result[k] = '\0';

        printf("%s\n", result);
    }

    return 0;
}
