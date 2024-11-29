#include <stdio.h>

int main() {
    float salario_fixo, total_vendas, comissao, total_receber;

    printf("Digite o salario fixo do vendedor: ");
    scanf("%f", &salario_fixo);

    printf("Digite o total de vendas efetuadas pelo vendedor no mes: ");
    scanf("%f", &total_vendas);

    comissao = total_vendas * 0.18;

    total_receber = salario_fixo + comissao;

    printf("O total a receber no final do mes e: %.2f\n", total_receber);

    return 0;
}