#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, soma_raizes;

    printf("Digite o coeficiente a: ");
    scanf("%lf", &a);
    printf("Digite o coeficiente b: ");
    scanf("%lf", &b);
    printf("Digite o coeficiente c: ");
    scanf("%lf", &c);

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("nan\n");
    } else {
        soma_raizes = -b / a;
        printf("%.2f\n", soma_raizes);
    }

    return 0;
}