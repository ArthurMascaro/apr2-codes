#include <stdio.h>

int main() {
    int num, soma_pares = 0, soma_impares = 0, soma_total = 0;

    printf("Digite uma sequência de números inteiros (0 para terminar):\n");

    while (1) {
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        soma_total += num;
        if (num % 2 == 0) {
            soma_pares += num;
        } else {
            soma_impares += num;
        }
    }

    printf("%d\n", soma_pares);
    printf("%d\n", soma_impares);
    printf("%d\n", soma_total);

    return 0;
}