
#include "delim.h"
#include <stdio.h>

int data =54 ;


void hello(void) {
    int static tine = 5;
    tine +=5;
    printf("Hello, World! %d\n", tine);
}
void args_parser(int argc, char** argv){
    if(argc > 1) {

        for (int i = 1; i < argc; i++) {
            printf("%d=%d\n",argc,count_words(argv[i]));
        }
    }
    else{
        printf("%d=0",argc);
    }
}