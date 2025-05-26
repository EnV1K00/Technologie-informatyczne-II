#include <stdio.h>
#include <stdlib.h>
#include "list.h"

typedef struct Node {
    int data;
    struct Node* next;
} node;

node* head = NULL;
int nodeCount = 0;

/* ---------- QUEUE FUNCTIONS ---------- */

int enqueue(int element) {
    return insertBack(element);
}

int dequeue(int* out) {
    if (!head) return EXIT_FAILURE;
    if (out) *out = head->data;
    return deleteFront();
}

int front(int* out) {
    if (!head) return EXIT_FAILURE;
    if (out) *out = head->data;
    return EXIT_SUCCESS;
}

int isEmptyQueue() {
    return head == NULL;
}

/* ---------- BASIC LIST OPS ---------- */

int insertFront(int element) {
    node* current = (node*)malloc(sizeof(node));
    if (current) {
        current->data = element;
        current->next = head;
        head = current;
        nodeCount++;
        return EXIT_SUCCESS;
    }
    return EXIT_FAILURE;
}

int insertBack(int element) {
    node* current = (node*)malloc(sizeof(node));
    if (current) {
        current->data = element;
        current->next = NULL;
        if (!head) head = current;
        else {
            node* temp = head;
            while (temp->next) temp = temp->next;
            temp->next = current;
        }
        nodeCount++;
        return EXIT_SUCCESS;
    }
    return EXIT_FAILURE;
}

int deleteFront() {
    if (!head) return EXIT_FAILURE;
    node* temp = head;
    head = head->next;
    free(temp);
    nodeCount--;
    return EXIT_SUCCESS;
}

int deleteBack() {
    if (!head) return EXIT_FAILURE;
    if (!head->next) return deleteFront();

    node* prev = NULL;
    node* curr = head;
    while (curr->next) {
        prev = curr;
        curr = curr->next;
    }
    prev->next = NULL;
    free(curr);
    nodeCount--;
    return EXIT_SUCCESS;
}

void printList(void) {
    node* current = head;
    while (current) {
        printf("%d ", current->data);
        current = current->next;
    }
}

int getNodesCount() {
    return nodeCount;
}
