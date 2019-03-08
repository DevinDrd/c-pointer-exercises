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
node* tail;
node *current;

void printLList() {
    current = head;
    printf("head");

    while (current != tail->nextNode) {
        printf("->%d", current->value);
        current = current->nextNode;
    }
    printf("<-tail\n");
}

void insert(int value) {
    current = head;
    if (head == 0) { // if the list is empty
        head = (node*) malloc(sizeof(node));
        head->nextNode = 0;
        head->value = value;
        tail = head;
    } else { // if the list is not empty
        if (value < head->value) { // checks for insertion at beginning of list
            node *temp = head;
            head = (node*) malloc(sizeof(node));
            head->value = value;
            head->nextNode = temp;
        } else if (value >= tail->value){ // checks for insertion at end of list
            tail->nextNode = (node*) malloc(sizeof(node));
            tail = tail->nextNode;
            tail->value = value;
            tail->nextNode = 0;
        } else {
            while (value >= current->nextNode->value) { // while value is smaller than next value
                current = current->nextNode;
            }

            node *temp = current->nextNode; // hold a temp node* to keep the rest of the list
            current->nextNode = (node *) malloc(sizeof(node)); // create a new node
            current = current->nextNode;

            current->value = value;
            current->nextNode = temp;
        }
    }
}


void run_linked_list() {
    printf("Running linked list\n");

    head = 0; // initialize empty linked list
    tail = 0; // initialize empty list

    insert(5);
    insert(4);

    printLList();

}