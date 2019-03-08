//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int value;
    struct node* nextNode;
}node;

node* head;
//node* tail;
node *current;

void printLList() {
    current = head;
    printf("head\n");

    while (current != 0) {
        printf(" |\n");
        printf(" %d\n", current->value);
        current = current->nextNode;
    }
}

void insert(int value) {
    current = head;
    if (head != 0) { // if the list is not empty
        while (current->nextNode != 0) {
            current = current->nextNode;
        }
        current->nextNode = (node*) malloc(sizeof(node));
        current = current->nextNode;

        if (current == 0) {
            printf("Out of memory.\n");
        } else {
            current->nextNode = 0;
            current->value = value;
        }
    } else { // if the list is empty
        head = (node*) malloc(sizeof(node));
        head->nextNode = 0;
        head->value = value;
    }
}


void run_linked_list() {
    printf("Running linked list\n");

    head = 0; // initialize empty linked list

    insert(5);
    insert(8);

    printLList();

}