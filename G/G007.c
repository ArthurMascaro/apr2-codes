#include <stdio.h>

int main() {
    char S[100];
    int count = 0;

    printf("Digite uma string: ");
    fgets(S, sizeof(S), stdin);

    for (int i = 0; S[i] != '\0'; i++) {
        if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u') {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}