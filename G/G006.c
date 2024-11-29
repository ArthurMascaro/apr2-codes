#include <stdio.h>

int main() {
    char S[100];
    int length = 0;

    printf("Digite uma string: ");
    scanf("%s", S);

    while (S[length] != '\0') {
        length++;
    }

    printf("%d\n", length);

    return 0;
}