#include <stdio.h>
#include <math.h>

int main() {
    float largura, altura, custo_lata, rendimento_lata;
    float area_parede, latas_necessarias, custo_total;

    printf("Digite a largura da parede (em metros): ");
    scanf("%f", &largura);
    printf("Digite a altura da parede (em metros): ");
    scanf("%f", &altura);

    printf("Digite o custo da lata de tinta: ");
    scanf("%f", &custo_lata);
    printf("Digite o rendimento da lata de tinta (em metros quadrados): ");
    scanf("%f", &rendimento_lata);

    area_parede = largura * altura;

    latas_necessarias = ceil(area_parede / rendimento_lata);

    custo_total = latas_necessarias * custo_lata;

    printf("Latas de tinta necessarias: %.0f\n", latas_necessarias);
    printf("Custo total: %.2f\n", custo_total);

    return 0;
}