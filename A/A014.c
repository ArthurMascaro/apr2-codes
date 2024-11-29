#include <stdio.h>

int main() {
    int numero, invertido = 0;

    printf("Digite um numero inteiro de 4 digitos: ");
    scanf("%d", &numero);

    invertido += (numero % 10) * 1000;
    numero /= 10;
    invertido += (numero % 10) * 100;
    numero /= 10;
    invertido += (numero % 10) * 10;
    numero /= 10;
    invertido += numero;

    printf("Numero invertido: %d\n", invertido);

    return 0;
}