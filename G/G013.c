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
        diasNoMes[1] = 29;
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
    Data data;
    char input[11];

    printf("Digite uma data no formato dd/mm/aaaa: ");
    scanf("%10s", input);

    sscanf(input, "%d/%d/%d", &data.dia, &data.mes, &data.ano);

    if (validarData(data)) {
        printf("%02d de %s de %d\n", data.dia, nomeMes(data.mes), data.ano);
    } else {
        printf("DATA INVALIDA\n");
    }

    return 0;
}