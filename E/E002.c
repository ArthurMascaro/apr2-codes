#include <stdio.h>
#include <string.h>

int main() {
    char S[100];

    printf("Digite uma palavra: ");
    scanf("%s", S);

    int length = strlen(S);

    for (int i = length - 1; i >= 0; i--) {
        printf("%c", S[i]);
        if (i > 0) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}