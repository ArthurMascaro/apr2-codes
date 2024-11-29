#include <stdio.h>

int main() {
    int X, A;
    float V1, V2, valor_total;

    printf("Digite o limite de quilometros (X): ");
    scanf("%d", &X);
    printf("Digite o valor por km ate X km (V1): ");
    scanf("%f", &V1);
    printf("Digite o valor por km acima de X km (V2): ");
    scanf("%f", &V2);
    printf("Digite a quantidade de quilometros da viagem (A): ");
    scanf("%d", &A);

    if (A <= X) {
        valor_total = A * V1;
    } else {
        valor_total = X * V1 + (A - X) * V2;
    }

    printf("Valor total da viagem: %.2f\n", valor_total);

    return 0;
}