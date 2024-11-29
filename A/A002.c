#include <stdio.h>

int main(){
    // Soma, subtração e multiplicação de dois números inteiros
    int x, y;
    printf("Digite dois numeros: ");
    scanf("%d%d", &x, &y);
    printf("A soma de %d e %d e %d\n", x, y, x+y);
    printf("A subtracao de %d e %d e %d\n", x, y, x-y);
    printf("A multiplicacao de %d e %d e %d\n", x, y, x*y);

    return 1;
}

