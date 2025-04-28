#include <stdio.h>
#include "my_math.h"

void menu(void) {
    printf("\n------------MENU---------------");
    printf("\n1 - Entering numbers to array");
    printf("\n2 - Displaying numbers from array");
    printf("\n3 - Calculate average value");
    printf("\n4 - Determine maximum value");
    printf("\n5 - Determine minimum value");
    printf("\n6 - Save to file");
    printf("\n7 - Restore from file");
    printf("\n8 - EXIT");
}

int main() {
    int numbers[SIZE] = {15, 3, 36, 42, 58, 22, 95, 44, 76, 101};
    int option;
    char cycle = 'T';

    while (cycle == 'T' || cycle == 't') {
        menu();
        printf("\nChoose option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                enterNumbers(numbers);
                break;
            case 2:
                displayNumbers(numbers);
                break;
            case 3:
                calculateAverage(numbers);
                break;
            case 4:
                maximumValue(numbers);
                break;
            case 5:
                minimumValue(numbers);
                break;
            case 6:
                printf("\nSaving to file...");
                savingData(numbers);
                break;
            case 7:
                printf("\nRestoring data from file...");
                restoringData(numbers);
                break;
            case 8:
                printf("\nExiting the program.\n");
                return 0;
            default:
                printf("\nChoose a correct option...");
                break;
        }

        printf("\nDo you want to continue using the application? (T/N): ");
        getchar();
        scanf("%c", &cycle);
    }

    return 0;
}
