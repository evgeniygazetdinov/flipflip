//
// Created by evgesha on 20.08.2021.
//
#include <stdio.h>

int main(){
    int devided, divisor, quotent, reminder;
    printf("Введите делимое\n");
    scanf("%d", &devided);
    printf("введите делитель\n");
    scanf("%d", &divisor);
    // qualize
    quotent = devided / divisor;
    reminder = devided % divisor;
    printf("%d частное " , quotent);
    printf("%d остаток\n", reminder);
    return 0;

}

