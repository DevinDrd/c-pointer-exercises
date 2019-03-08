//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>

struct car {
    int year;
};

static struct car sedans[2]; // this is a struct car*

void run_global_array() {
    printf("Running global array\n");
    int size = sizeof(sedans)/ sizeof(sedans[0]);

    for (int i = 0; i < size; i++){
        sedans[i].year = (i + 1) * 1000;
        printf("sedans[%d].year: %d\n", i, sedans[i].year);
    }

    printf("\n");

}