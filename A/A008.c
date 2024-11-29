#include <stdio.h>
#include<math.h>

int main(){
    // Hipotenusa
    float x, y;
    printf("Digite os catetos de um triangulo retangulo: ");
    scanf("%f%f", &x, &y);
    printf("A hipotenusa de um triangulo retangulo com catetos %.2f e %.2f e %.2f\n", x, y, sqrt(x*x + y*y));
    return 1;
}

