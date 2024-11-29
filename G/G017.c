#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    char sexo;
    char ra[20];
    char data_ingresso[11];
    char curso[100];
} Aluno;

int main() {
    Aluno alunos[100];
    int count = 0;

    while (1) {
        printf("Digite o nome completo do aluno (ou FIM para terminar): ");
        fgets(alunos[count].nome, sizeof(alunos[count].nome), stdin);
        alunos[count].nome[strcspn(alunos[count].nome, "\n")] = '\0'

        if (strcmp(alunos[count].nome, "FIM") == 0) {
            break;
        }

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &alunos[count].sexo);
        getchar();

        printf("Digite o registro acadêmico: ");
        fgets(alunos[count].ra, sizeof(alunos[count].ra), stdin);
        alunos[count].ra[strcspn(alunos[count].ra, "\n")] = '\0';

        printf("Digite a data de ingresso (dd/mm/aaaa): ");
        fgets(alunos[count].data_ingresso, sizeof(alunos[count].data_ingresso), stdin);
        alunos[count].data_ingresso[strcspn(alunos[count].data_ingresso, "\n")] = '\0'; 

        printf("Digite o nome do curso: ");
        fgets(alunos[count].curso, sizeof(alunos[count].curso), stdin);
        alunos[count].curso[strcspn(alunos[count].curso, "\n")] = '\0'; 

        count++;
    }

    for (int i = 0; i < count; i++) {
        printf("Registro %d:\n", i + 1);
        printf("Nome: %s - Sexo: %s - RA: %s\n", alunos[i].nome, alunos[i].sexo == 'M' ? "Masculino" : "Feminino", alunos[i].ra);
        printf("Ingresso: %s - Curso: %s\n", alunos[i].data_ingresso, alunos[i].curso);
        printf("==========\n");
    }

    return 0;
}