#include <stdio.h>

int main() {
    int A, B;
    int resultado = 1;

    printf("Digite a base A: ");
    scanf("%d", &A);
    printf("Digite o expoente B: ");
    scanf("%d", &B);

    for (int i = 0; i < B; i++) {
        resultado *= A;
    }

    printf("%d\n", resultado);

    return 0;
}