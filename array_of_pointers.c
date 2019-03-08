//
// Created by Ivo Georgiev on 2019-03-07.
//
#include <stdio.h>
#include <stdlib.h>

static struct test {
    int id;
};

void run_array_of_pointers() {
    printf("Running array of pointers\n");

    struct test** tests = (struct test**) calloc(2, sizeof(struct test*));
    int size = 2*sizeof(tests)/sizeof(tests[0]);

    struct test test1;
    struct test test2;

    tests[0] = &test1;
    tests[1] = &test2;

    for (int i = 0; i < size; i++) {
        tests[i]->id = i;
    }

    printf("tests[0]->id: %d\n", tests[0]->id);
    printf("tests[1]->id: %d\n", tests[1]->id);

    printf("\n");

}