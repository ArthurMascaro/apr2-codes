#include <stdio.h>
#include<math.h>

int main(){
    // Raízes reais de uma equação do segundo grau
    float a, b, c, delta, x1, x2;
    printf("Digite os coeficientes a, b e c de uma equacao do segundo grau: ");
    scanf("%f%f%f", &a, &b, &c);
    delta = b*b - 4*a*c;
    if(delta > 0){
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("As raizes da equacao %.2fx^2 + %.2fx + %.2f = 0 sao %.2f e %.2f\n", a, b, c, x1, x2);
    }else if(delta == 0){
        x1 = -b / (2*a);
        printf("A raiz da equacao %.2fx^2 + %.2fx + %.2f = 0 e %.2f\n", a, b, c, x1);
    }else{
        printf("A equacao %.2fx^2 + %.2fx + %.2f = 0 nao possui raizes reais\n", a, b, c);
    }
    return 1;
}

