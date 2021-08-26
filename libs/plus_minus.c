//
// Created by evgesha on 25.08.2021.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int return_quatity_digits(int* my_digits){
    int counter = 0;
    int my_d = *my_digits;
    while(my_d !=0){
        my_d = my_d /10;
        counter++;
    }
    return counter;
}


void equalize(char* empty_string, int* quatity){
    printf("%d",*quatity);
    printf("%d", *empty_string);
    // TODO add algorith for analize digits git
    //TODO find algorithm for find right symol
    //TODO add function insert into end array
}


char* plus_minus(){
    int my_ = 1234;
    //find quatity for string allocate
    int quatity = return_quatity_digits(&my_);
    //make string
    char* str = malloc(quatity);
    equalize(str, &quatity);

    str = "her";
    printf("%s",str);
    return str;
}

