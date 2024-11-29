#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef struct 
{
    int max;
    int size;
    int* persons;
} PersonList;

PersonList* createList(int max);
int searchPerson(PersonList* list, int person) ;
void removePerson(PersonList* list, int index);
void listarPessoas(PersonList* list);
int calculateWinner(PersonList* list, int eliminatedPersonNumber);
void clearList(PersonList* list);

#endif