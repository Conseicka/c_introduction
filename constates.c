#include <stdio.h>

#define PIZZACOST 1.5
const char NEWLINE = '\n';

int main(){
    float costoPizzas;
    float numberOfSlices = 3;
    costoPizzas = PIZZACOST * numberOfSlices;

    printf("totall bill: %f", costoPizzas);
    printf("%c", NEWLINE);

    return 0;
}