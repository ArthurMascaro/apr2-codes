#include <stdio.h>

int main() {
    int idade, total_idades = 0, soma_idades = 0;
    int maiores_idade = 0, idosos = 0;

    printf("Digite as idades (um número negativo para terminar):\n");

    while (1) {
        scanf("%d", &idade);
        if (idade < 0) {
            break;
        }
        soma_idades += idade;
        total_idades++;
        if (idade >= 18) {
            maiores_idade++;
        }
        if (idade > 75) {
            idosos++;
        }
    }

    if (total_idades > 0) {
        double media_idades = (double)soma_idades / total_idades;
        double porcentagem_idosos = (double)idosos / total_idades * 100;

        printf("%.2f\n", media_idades);
        printf("%d\n", maiores_idade);
        printf("%.2f%%\n", porcentagem_idosos);
    } else {
        printf("Nenhuma idade válida foi fornecida.\n");
    }

    return 0;
}