#include <stdio.h>
#include <string.h>
#include <math.h>

int binarioParaDecimal(char binario[]) {
    int decimal = 0;
    int length = strlen(binario);

    for (int i = 0; i < length; i++) {
        if (binario[length - 1 - i] == '1') {
            decimal += pow(2, i);
        }
    }

    return decimal;
}

int main() {
    char binario[100];

    printf("Digite um número em base binária: ");
    scanf("%s", binario);

    int decimal = binarioParaDecimal(binario);

    printf("%d\n", decimal);

    return 0;
}