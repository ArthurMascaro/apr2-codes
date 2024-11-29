#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
PersonList* createList(int max){
    PersonList* list = (PersonList*) malloc(sizeof(PersonList));
    list->persons = (int*) malloc(sizeof(int) * max);
    list->size = 0;

    for(int i = 1; i <= max; i++){
        list->persons[list->size] = i;
        list->size++;
    }

    return list;
};

int searchPerson(PersonList* list, int person) {
    for (int i = 0; i < list->size; i++) {
        if (list->persons[i] == person) {
            printf("pessoa encontrada indece %d, valor %d \n", i, list->persons[i]);
            return i;
        }
    }
    return -1; 
}
void removePerson(PersonList* list, int index){
    for(int i = index; i < list->size; i++){
        list->persons[i] = list->persons[i+1];
    }
    list->size--;
};

void listarPessoas(PersonList* list){
    for(int i = 0; i < list->size; i++){
        printf("%d", list->persons[i]);
    }
    printf("\n");
}

int calculateWinner(PersonList* list, int eliminatedPersonNumber){
    int personsRemoved = 0;
    int start = 1;
    int personRemovedNumber;
    while(list->size > 1){
        for(int i = start; i < list->size; i += 1){
            if(personsRemoved+1 == eliminatedPersonNumber){
                personRemovedNumber = list->persons[i];
            };

            int personIndex = searchPerson(list, list->persons[i]);
            removePerson(list, personIndex);
            personsRemoved++;
            if(i == list->size){
                start = 1;
            } else if(i == list->size -1){
                start = 0;
            }
        }
    }
    printf("%d pessoa eliminada: %d\n", eliminatedPersonNumber, personRemovedNumber);
    printf("Vencedor: %d\n", list->persons[0]);
};


void clearList(PersonList* list){
    free(list->persons);
    free(list);
};