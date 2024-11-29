#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char S[100];
    int left = 0, right;

    printf("Digite uma string: ");
    fgets(S, sizeof(S), stdin);

    // Remove newline character if present
    size_t len = strlen(S);
    if (len > 0 && S[len - 1] == '\n') {
        S[len - 1] = '\0';
    }

    right = strlen(S) - 1;

    while (left < right) {
        if (isspace(S[left])) {
            left++;
            continue;
        }
        if (isspace(S[right])) {
            right--;
            continue;
        }
        if (S[left] != S[right]) {
            printf("0\n");
            return 0;
        }
        left++;
        right--;
    }

    printf("1\n");
    return 0;
}