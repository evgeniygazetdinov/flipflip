//
// Created by evgesha on 25.08.2021.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char OPERATORS[2] = {'-', '+'};


int return_quatity_digits(int* my_digits){
    int counter = 0;
    int my_d = *my_digits;
    while(my_d !=0){
        my_d = my_d /10;
        counter++;
    }
    return counter;
}

int* make_array_with_digits(int* counter,int* my_digits){
    int COUNTER = *counter;
    int DIGITS = *my_digits;

    int *ret = malloc(COUNTER);
    if(!ret){
        return NULL;
    }
    while(COUNTER!=0){
        int begin = COUNTER;
        int digit = DIGITS % 10;
        // do something with digit
        DIGITS /= 10;

        ret[COUNTER - 1] = digit;
        COUNTER--;
    }
    return ret;
}

void calculate(int* my_array, int* quantity){
    int result = 0;
    char* symbols;
    int count = 0;
    int start =0;
    while (count != (*quantity)){
        if((my_array[count] + my_array[count+1]) != 0){
            result = my_array[count] - my_array[count+1];
            symbols[count] = '+';


        }
        else{
            result =my_array[count] - my_array[count+1];
            symbols[count] = '-';
        }
        count++;
    }
}

void analizer(int* my_array,int* quantity){
    int result;
    calculate(my_array, quantity);
}
void equalize(char* empty_string, int* quatity,int* numbers){

    int* my_array = make_array_with_digits(quatity, numbers);
    // TODO add algorith for analize digits git
    analizer(my_array, quatity);
    //TODO find algorithm for find right symol
    //TODO add function insert into end array
    free(my_array);
}

char* plus_minus(int* digit){
    //find quatity for string allocate
    int quatity = return_quatity_digits(digit);
    //make string
    char* str = malloc(quatity);
    equalize(str, &quatity, digit);

    str = "her";
    printf("%s",str);
    return str;
}

