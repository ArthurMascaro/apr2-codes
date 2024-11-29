#include "fatorial.h"

unsigned long long fatorial(int num) {
    unsigned long long result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}