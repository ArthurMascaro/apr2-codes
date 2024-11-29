#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Ponto;

float calcularDistancia(Ponto p1, Ponto p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    Ponto p1, p2;

    printf("Digite as coordenadas do ponto P1 (x y): ");
    scanf("%f %f", &p1.x, &p1.y);

    printf("Digite as coordenadas do ponto P2 (x y): ");
    scanf("%f %f", &p2.x, &p2.y);

    float distancia = calcularDistancia(p1, p2);

    printf("%.4f\n", distancia);

    return 0;
}