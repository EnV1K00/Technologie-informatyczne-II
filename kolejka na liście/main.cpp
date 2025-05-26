#include <iostream>
#include "list.h"

void clear(void) {
    while (getchar() != '\n');
}

void menu(void) {
    printf("QUEUE using singly linked list (FIFO)\n");
    printf("1. Enqueue (add to back)\n");
    printf("2. Dequeue (remove from front)\n");
    printf("3. Front (peek front element)\n");
    printf("4. Is Empty?\n");
    printf("5. Print queue\n");
    printf("0. Exit\n\n");
}

int main() {
    int value = 0, option = 0, errorCode = 0;

    while (1) {
        menu();
        while (!scanf("%d", &option)) {
            printf("Not an integer! Input an integer: ");
            clear();
        }

        switch (option) {
            case 1: // Enqueue
                // system("cls");
                printf("Input a number to enqueue: ");
                while (!scanf("%d", &value)) {
                    printf("Not an integer! Input an integer: ");
                    clear();
                }
                errorCode = enqueue(value);
                !errorCode ? printf("Enqueued successfully!\n\n") : printf("Enqueue failed.\n\n");
                break;

            case 2: // Dequeue
                // system("cls");
                if (!isEmptyQueue()) {
                    errorCode = dequeue(&value);
                    !errorCode ? printf("Dequeued value: %d\n\n", value) : printf("Dequeue failed.\n\n");
                } else {
                    printf("Queue is empty.\n\n");
                }
                break;

            case 3: // Front
                //system("cls");
                if (!isEmptyQueue()) {
                    if (front(&value) == EXIT_SUCCESS)
                        printf("Front of queue: %d\n\n", value);
                } else {
                    printf("Queue is empty.\n\n");
                }
                break;

            case 4: // isEmpty
                //system("cls");
                printf(isEmptyQueue() ? "Queue is empty.\n\n" : "Queue is NOT empty.\n\n");
                break;

            case 5: // Print queue
                //system("cls");
                printf("Queue (front to back): ");
                printList();
                printf("\n%d elements\n\n", getNodesCount());
                break;

            case 0: // Exit
                return 0;

            default:
                //system("cls");
                printf("Choose a valid option.\n\n");
                break;
        }
    }

    return 0;
}
