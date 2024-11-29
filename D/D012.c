#include <stdio.h>

int main() {
    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    int vetor[N];

    printf("Digite %d valores inteiros:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    int min_index = 0, max_index = 0;

    for (int i = 1; i < N; i++) {
        if (vetor[i] < vetor[min_index]) {
            min_index = i;
        }
        if (vetor[i] > vetor[max_index]) {
            max_index = i;
        }
    }

    // Swap the smallest value with the element at index 0
    int temp = vetor[0];
    vetor[0] = vetor[min_index];
    vetor[min_index] = temp;

    // Swap the largest value with the element at the last index
    if (max_index == 0) {
        max_index = min_index;
    }
    temp = vetor[N - 1];
    vetor[N - 1] = vetor[max_index];
    vetor[max_index] = temp;

    printf("Vetor resultante:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}