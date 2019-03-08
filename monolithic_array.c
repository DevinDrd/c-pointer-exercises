//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>
#include <stdlib.h>

struct cpu {
    int speed;
};

void run_monolithic_array() {
    printf("Running monolithic array\n");

    struct cpu* intel = (struct cpu*) calloc(2, sizeof(struct cpu*)); // The type of the array is a struct cpu*
    int size = sizeof(intel)/sizeof(intel[0]);

    for (int i = 0; i < size; i++) {
        intel[i].speed = (i + 1) * 100;
        printf("intel[%d].speed: %d\n", i, intel[i]);
    }

    free(intel);
    intel = NULL;

    printf("\n");

}