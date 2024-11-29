#include <stdio.h>

int main(){
    // Desconto em compra
    float valor, desconto;
    printf("Digite o valor da compra: ");
    scanf("%f", &valor);
    printf("Digite o desconto: ");
    scanf("%f", &desconto);
    printf("O valor da compra com desconto e %.2f\n", valor - valor*desconto/100);

    return 1;
}

