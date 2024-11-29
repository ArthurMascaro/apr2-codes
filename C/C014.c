#include <stdio.h>

int main() {
    int N, C, M;
    int chocolates, embalagens;

    printf("Digite o valor de N (dinheiro): ");
    scanf("%d", &N);
    printf("Digite o valor de C (preço de cada chocolate): ");
    scanf("%d", &C);
    printf("Digite o valor de M (embalagens para um chocolate grátis): ");
    scanf("%d", &M);

    chocolates = N / C;
    embalagens = chocolates;

    while (embalagens >= M) {
        int gratis = embalagens / M;
        chocolates += gratis;
        embalagens = embalagens % M + gratis;
    }

    printf("%d\n", chocolates);

    return 0;
}