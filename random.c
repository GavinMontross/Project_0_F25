#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

char* rand_string(char *s, size_t size){
    for (int i = 0; i < size; i ++){
        s[i] = 'A' + (rand() % 26);
    }    
    s[size] = '\0';
    return s;
}