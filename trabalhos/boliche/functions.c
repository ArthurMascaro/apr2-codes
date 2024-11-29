#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* splitToIntArray(const char* str, int* size) {
    int* array = malloc(MAX * sizeof(int));
    int count = 0;
    
    char* input = strdup(str);
    char* token = strtok(input, " ");
    
    while (token != NULL) {
        array[count++] = atoi(token);
        token = strtok(NULL, " ");
    }
    
    free(input); 
    *size = count;
    
    return array;
}

struct Frame* createFrame() {
    Frame* frame = (Frame*) malloc(sizeof(Frame));
    frame->rolls[0] = 0;
    frame->rolls[1] = 0;
    frame->bonusRoll = 0;
    frame->isStrike = 0;
    frame->isSpare = 0;
    frame->next = NULL;
    return frame;
}

Frame* buildFrames(int* plays, int size) {
    Frame* head = NULL; 
    Frame* current = NULL;
    int playIndex = 0;   

    for (int frameNum = 0; frameNum < 10; frameNum++) {
        struct Frame* frame = createFrame();

        if(head == NULL){
            head = frame;
        } else {
            current->next = frame;
        }

        current = frame;

        frame->rolls[0] = plays[playIndex++];

        if (frame->rolls[0] == 10) {
            frame->isStrike = 1;
            if(frameNum < 9){
                frame->rolls[1] = 0;
            } else {
                frame->rolls[1] = plays[playIndex++];
            }
        } else {
            frame->rolls[1] = plays[playIndex++];
            
            if (frame->rolls[0] + frame->rolls[1] == 10) {
                frame->isSpare = 1;
            }
        }

         if (frameNum == 9) {
            if (frame->isStrike || frame->isSpare) {
                frame->bonusRoll = plays[playIndex++];  
            }
            
        }
    }
    return head;
}

void printFrames(Frame* head) {
    Frame* current = head;
    int frameNumber = 1;
    
    while (current != NULL) {
        // Para os frames de 1 a 9
        if (frameNumber < 10) {
            if (current->isStrike) {
                printf("X _ | ");  // Se for um strike, imprime 'X _'
            } else if (current->isSpare) {
                printf("%d / | ", current->rolls[0]);  // Se for um spare, imprime 'n /'
            } else {
                printf("%d %d | ", current->rolls[0], current->rolls[1]);  // Jogadas normais
            }
        }
        else {
            if (current->isStrike) {
                if(current->rolls[0] == 10){
                    printf("X ");
                } else {
                    printf("%d ", current->rolls[0]);
                }
                if(current->rolls[1] == 10){
                    printf("X ");
                } else {
                    printf("%d ", current->rolls[1]);
                }

                if(current->bonusRoll == 10){
                    printf("X ");
                } else {
                    printf("%d ", current->bonusRoll);
                }
            }
            else if (current->isSpare) {
                printf("%d / ", current->rolls[0]);
                if(current->bonusRoll == 10){
                    printf("X ");
                } else {
                    printf("%d ", current->bonusRoll);
                }
            } else {
                printf("%d %d", current->rolls[0], current->rolls[1]);
            }
        }
        
        current = current->next;  
        frameNumber++;
    }
    printf("\n");
}

