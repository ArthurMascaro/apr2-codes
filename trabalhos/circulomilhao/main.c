#include "functions.h"
#include <stdio.h>

int main(){
    int max, eliminatedPerson;
    printf("Digite o total de participantes\n");
    scanf("%d", &max);
    printf("Pessoa Eliminada: \n");
    scanf("%d", &eliminatedPerson);
    PersonList* list = createList(max);
    calculateWinner(list, eliminatedPerson);
    clearList(list);
}