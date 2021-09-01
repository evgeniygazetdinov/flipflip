//
// Created by evgesha on 17.08.2021.
//
#include "libs/library.h"
#include "libs/plus_minus.h"

extern int data;

int main(int argc, char** argv) {
    int my_digits = 1234;
    int my_digits2 = 26712;
    plus_minus(&my_digits);
    plus_minus(&my_digits2);
//args_parser(argc, argv);
    return 0;
}