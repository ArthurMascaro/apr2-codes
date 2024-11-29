#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

void count_chars(const char *str, int *count) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i])) {
            count[tolower(str[i]) - 'a']++;
        }
    }
}

int main() {
    char A[MAX], B[MAX];
    int countA[26] = {0}, countB[26] = {0};

    printf("Digite a primeira string: ");
    fgets(A, sizeof(A), stdin);
    printf("Digite a segunda string: ");
    fgets(B, sizeof(B), stdin);

    // Remove newline character if present
    size_t lenA = strlen(A);
    if (lenA > 0 && A[lenA - 1] == '\n') {
        A[lenA - 1] = '\0';
    }
    size_t lenB = strlen(B);
    if (lenB > 0 && B[lenB - 1] == '\n') {
        B[lenB - 1] = '\0';
    }

    count_chars(A, countA);
    count_chars(B, countB);

    for (int i = 0; i < 26; i++) {
        if (countA[i] != countB[i]) {
            printf("0\n");
            return 0;
        }
    }

    printf("1\n");
    return 0;
}