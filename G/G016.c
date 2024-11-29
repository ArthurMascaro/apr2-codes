#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Ponto;

typedef struct {
    Ponto p1;
    Ponto p2;
} Retangulo;

float calcularArea(Retangulo ret) {
    float largura = fabs(ret.p2.x - ret.p1.x);
    float altura = fabs(ret.p2.y - ret.p1.y);
    return largura * altura;
}

int main() {
    Retangulo ret;

    printf("Digite as coordenadas do ponto P1 (x y): ");
    scanf("%f %f", &ret.p1.x, &ret.p1.y);

    printf("Digite as coordenadas do ponto P2 (x y): ");
    scanf("%f %f", &ret.p2.x, &ret.p2.y);

    float area = calcularArea(ret);

    printf("%.4f\n", area);

    return 0;
}