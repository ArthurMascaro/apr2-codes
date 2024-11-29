#include <stdio.h>

int main(){
    //  Índice de massa corporal (IMC)
    float peso, altura;
    printf("Digite o peso (em kg) e a altura (em metros): ");
    scanf("%f%f", &peso, &altura);
    float imc = peso / (altura * altura);
    printf("O IMC e %.2f\n", imc);

    return 1;
}

