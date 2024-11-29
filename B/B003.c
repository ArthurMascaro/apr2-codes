#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade do eleitor: ");
    scanf("%d", &idade);

    if (idade < 16) {
        printf("DISPENSADO\n");
    } else if (idade >= 16 && idade <= 17) {
        printf("FACULTATIVO\n");
    } else if (idade >= 18 && idade <= 69) {
        printf("OBRIGATORIO\n");
    } else {
        printf("DISPENSADO\n");
    }

    return 0;
}