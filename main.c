#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int array[10];
    int i = 0;
    while (i <= 10) {
        array[i] = i;
        i++;
    }

    i = 0;
    while (i <= 10) {
        printf("%d ", array[i]);
        i++;
    }

    printf("\n");

    return 0;
}