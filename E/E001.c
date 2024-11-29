#include <stdio.h>
#include <string.h>

int main() {
    char S[100];

    printf("Digite uma palavra: ");
    scanf("%s", S);

    int length = strlen(S);

    for (int i = 0; i < length; i++) {
        printf("%c", S[i]);
        if (i < length - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}