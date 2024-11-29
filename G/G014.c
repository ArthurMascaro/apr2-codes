#include <stdio.h>
#include <string.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

int validarData(Data data) {
    if (data.mes < 1 || data.mes > 12) return 0;
    if (data.dia < 1) return 0;

    int diasNoMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (data.ano % 4 == 0 && (data.ano % 100 != 0 || data.ano % 400 == 0)) {
        diasNoMes[1] = 29; // Ano bissexto
    }

    if (data.dia > diasNoMes[data.mes - 1]) return 0;

    return 1;
}

const char* nomeMes(int mes) {
    const char* meses[] = {
        "janeiro", "fevereiro", "marco", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };
    return meses[mes - 1];
}

int main() {
    int N;

    printf("Digite o número de datas: ");
    scanf("%d", &N);

    Data datas[N];
    char input[11];

    for (int i = 0; i < N; i++) {
        printf("Digite a data %d no formato dd/mm/aaaa: ", i + 1);
        scanf("%10s", input);
        sscanf(input, "%d/%d/%d", &datas[i].dia, &datas[i].mes, &datas[i].ano);
    }

    for (int i = 0; i < N; i++) {
        if (validarData(datas[i])) {
            printf("%02d de %s de %d\n", datas[i].dia, nomeMes(datas[i].mes), datas[i].ano);
        } else {
            printf("DATA INVALIDA\n");
        }
    }

    return 0;
}