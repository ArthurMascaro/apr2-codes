#include <stdio.h>

int main(){
    // Divisão real, divisão inteira e resto da divisão
    int x, y;
    printf("Digite dois numeros: ");
    scanf("%d%d", &x, &y);

    printf("A divisao real de %d por %d e %.2f\n", x, y, (float)x/y);
    printf("A divisao inteira de %d por %d e %d\n", x, y, x/y);
    printf("O resto da divisao de %d por %d e %d\n", x, y, x%y);

    return 1;
}

