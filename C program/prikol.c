#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char filename = 97;
    int i = 0;
    while (i < 10){
        FILE  * fpointer = fopen(filename, "w");
        fprintf(fpointer, "HELLO WORLD!)\nHELLO WORLD!)\nHELLO WORLD!)\nHELLO WORLD!)\nHELLO WORLD!)\nHELLO WORLD!)\n");
        ++i;
        ++filename;
    }
}