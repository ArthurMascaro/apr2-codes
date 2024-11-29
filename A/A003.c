#include <stdio.h>

int main(){
    //Média de duas notas
    float x, y;
    printf("Digite dois numeros: ");
    scanf("%f%f", &x, &y);
    printf("A media de %.2f e %.2f e %.2f\n", x, y, (x+y)/2);

    return 1;
}

