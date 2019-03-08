//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>

struct ball {
    int size;
};

void run_local_array() {
    printf("Running local array\n");

    struct ball balls[2]; // The type of the array variable is a struct ball*

    int size = sizeof(balls)/ sizeof(balls[0]);

    for (int i = 0; i < size; i++){
        balls[i].size = (i + 1) * 50;
        printf("sedans[%d].year: %d\n", i, balls[i].size);
    }

    printf("\n");

}