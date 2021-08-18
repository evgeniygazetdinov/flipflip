#include "library.h"

#include <stdio.h>

int data =54 ;


void hello(void) {
    int static tine = 5;
    tine +=5;
    printf("Hello, World! %d\n", tine);
}