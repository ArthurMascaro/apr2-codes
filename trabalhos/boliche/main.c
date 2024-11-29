#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char input[200];
    int* plays;
    int size;

    fgets(input, sizeof(input), stdin);

    plays = splitToIntArray(input, &size);
    
    printf("Array: ");
    for(int i = 0; i < size; i++){
        printf("%d ", plays[i]);  
    }
    printf("\n");

    Frame* frames = buildFrames(plays, size);

    printf("Frames:\n");
    printFrames(frames);

    free(plays); 

    Frame* current = frames;
    while (current != NULL) {
        Frame* next = current->next;
        free(current);
        current = next;
    }
    
    return 0;
}
