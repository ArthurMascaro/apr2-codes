#include <stdio.h>
#include <string.h>

int main() {
    char S[100], C;
    int count = 0;

    printf("Digite uma string: ");
    scanf("%s", S);

    printf("Digite um caractere: ");
    scanf(" %c", &C);

    int length = strlen(S);

    for (int i = 0; i < length; i++) {
        if (S[i] == C) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}