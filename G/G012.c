#include <stdio.h>
#include <string.h>

void complementar(char *fita, char *complementar) {
    for (int i = 0; fita[i] != '\0'; i++) {
        switch (fita[i]) {
            case 'A':
                complementar[i] = 'T';
                break;
            case 'T':
                complementar[i] = 'A';
                break;
            case 'C':
                complementar[i] = 'G';
                break;
            case 'G':
                complementar[i] = 'C';
                break;
        }
    }
}

int main() {
    char fita[100], fita_complementar[100];

    printf("Digite uma fita de DNA: ");
    scanf("%s", fita);

    complementar(fita, fita_complementar);

    printf("%s\n", fita);
    printf("%s\n", fita_complementar);

    return 0;
}