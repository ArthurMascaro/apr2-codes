#include <stdio.h>

int main(){
    // Celsius para Fahrenheit
    float celsius;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    printf("A temperatura em Fahrenheit e %.2f\n", celsius*9/5 + 32);
    return 1;
}

