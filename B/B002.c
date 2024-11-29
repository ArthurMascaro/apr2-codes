#include <stdio.h>

int main() {
    int L, V;
    float M, A, multa_total;

    printf("Digite o limite de velocidade (km/h): ");
    scanf("%d", &L);
    printf("Digite o valor da multa base (R$): ");
    scanf("%f", &M);
    printf("Digite o valor adicional por km acima do limite (R$): ");
    scanf("%f", &A);
    printf("Digite a velocidade captada pelo radar (km/h): ");
    scanf("%d", &V);

    if (V > L) {
        multa_total = M + (V - L) * A;
    } else {
        multa_total = 0.00;
    }

    printf("Valor total da multa: %.2f\n", multa_total);

    return 0;
}