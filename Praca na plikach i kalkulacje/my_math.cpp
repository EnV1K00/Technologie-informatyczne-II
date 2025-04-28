#include <stdio.h>
#include <stdlib.h>
#include "my_math.h"



void enterNumbers(int numbers[]) {
    for (int i = 0; i < SIZE; i++) {
        printf("\nEnter value for element %d: ", i);
        scanf("%d", &numbers[i]);
    }
}

void displayNumbers(int numbers[]) {
    for (int i = 0; i < SIZE; i++) {
        printf("\nElement %d: %d", i, numbers[i]);
    }
}

float calculateAverage(int numbers[]) {
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += numbers[i];
    }
    float average = (float) sum / SIZE;
    printf("\nAverage: %.2f", average);
    return average;
}

int maximumValue(int numbers[]) {
    int max = numbers[0];
    for (int i = 1; i < SIZE; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    printf("\nMaximum value is: %d", max);
    return max;
}

int minimumValue(int numbers[]) {
    int min = numbers[0];
    for (int i = 1; i < SIZE; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    printf("\nMinimum value is: %d", min);
    return min;
}

void savingData(int numbers[]){
    FILE * fptr = NULL;
    fptr = fopen("../numbers.txt", "w");
    if (fptr == NULL)
    {
        printf("\nAn error occured while opening file...\n");
    }
    for (int i=0;i<SIZE;i++)
    {
        fprintf(fptr, "%d\n", numbers[i]);
    }
    printf("\nNumbers have been saved...");
    fclose(fptr);
}

void restoringData(int numbers[]) {
    FILE *fptr = fopen("../numbers.txt", "r");
    if (fptr == NULL) {
        printf("\nAn error occurred while opening file...\n");
        return;
    }

    for (int i = 0; i < SIZE; i++) {
        if (fscanf(fptr, "%d", &numbers[i]) != 1) {
            printf("\nAn error occurred while reading data from file...\n");
            fclose(fptr);
            return;
        }
    }

    fclose(fptr);
    printf("\nData has been restored...");
}