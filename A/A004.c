#include <stdio.h>

int main(){
    //Média de duas notas de um(a) aluno(a)
    char nome[50];
    float x, y;
    printf("Digite o nome do(a) aluno(a): ");
    scanf("%s", nome);
    printf("Digite duas notas de %s: ", nome);
    scanf("%f%f", &x, &y);
    printf("%s obteve %.2f de media\n", nome, (x+y)/2);
    return 1;
}

