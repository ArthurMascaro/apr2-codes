#include <stdio.h>

int main() {
    int X1, V1, X2, V2;

    printf("Digite a posição inicial X1 e a distância do pulo V1 do primeiro canguru: ");
    scanf("%d %d", &X1, &V1);
    printf("Digite a posição inicial X2 e a distância do pulo V2 do segundo canguru: ");
    scanf("%d %d", &X2, &V2);

    if (V1 == V2) {
        if (X1 == X2) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
    } else {
        if ((X2 - X1) % (V1 - V2) == 0 && (X2 - X1) / (V1 - V2) >= 0) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
    }

    return 0;
}