#include <iostream>
#include "list.h"

void clear(void) {
    while (getchar() != '\n');
}

void menu(void) {
    printf("STACK using singly linked list (LIFO)\n");
    printf("1. Push (add element to top)\n");
    printf("2. Pop (remove top element)\n");
    printf("3. Top (peek top element)\n");
    printf("4. Is Empty?\n");
    printf("5. Print stack\n");
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
            case 1: // Push
                printf("Input a number to push: ");
                while (!scanf("%d", &value)) {
                    printf("Not an integer! Input an integer: ");
                    clear();
                }
                errorCode = push(value);
                !errorCode ? printf("Pushed successfully!\n\n") : printf("Push failed.\n\n");
                break;

            case 2: // Pop
                if (!isEmpty()) {
                    errorCode = pop(&value);
                    !errorCode ? printf("Popped value: %d\n\n", value) : printf("Pop failed.\n\n");
                } else {
                    printf("Stack is empty.\n\n");
                }
                break;

            case 3: // Top
                if (!isEmpty()) {
                    if (top(&value) == EXIT_SUCCESS)
                        printf("Top of stack: %d\n\n", value);
                } else {
                    printf("Stack is empty.\n\n");
                }
                break;

            case 4: // isEmpty
                printf(isEmpty() ? "Stack is empty.\n\n" : "Stack is NOT empty.\n\n");
                break;

            case 5: // Print stack
                printf("Stack (top to bottom): ");
                printList();
                printf("\n%d elements\n\n", getNodesCount());
                break;

            case 0: // Exit
                return 0;

            default:
                printf("Choose a valid option.\n\n");
                break;
        }
    }

    return 0;
}
