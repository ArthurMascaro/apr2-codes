#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#define MAX 100

typedef struct Frame {
    int rolls[2]; 
    int bonusRoll;   
    int isStrike;    
    int isSpare;    
    struct Frame* next;
} Frame;

int* splitToIntArray(const char* str, int* size);

struct Frame* buildFrames(int* plays, int size);

void printFrames(Frame* head);

Frame* createFrame();

#endif