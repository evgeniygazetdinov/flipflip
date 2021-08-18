//
// Created by evgesha on 17.08.2021.
//
#include "library.h"
#include "delim.h"
#include <stdio.h>

extern int data;

void delim_run(int* argc, char*** argv[]){
    if(argc > 1) {
        for (int i = 1; i < argc; i++) {
            printf("%d\n", count_words(&argv[i]));
        }
    }
    else{
        printf("%d=0",count_words(argc));
    }
}

int main(int argc, char** argv) {
    printf("%d\n", data);
    delim_run(&argc, argv);

    return 0;
}