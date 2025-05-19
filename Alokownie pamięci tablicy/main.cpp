#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
    int i, aSize;
    int * randomNums;
    time_t t;
    double total = 0;
    int biggest, smallest;
    float average;
    srand(time(&t));
    printf("Ile liczb losowych chcesz zapisac w tablicy? ");
    scanf(" %d", &aSize);
// alokacja tablicy tylu liczb całkowitych, ile zażądał użytkownik
    randomNums = (int *) malloc( aSize * sizeof(double));
// sprawdzenie czy tablica została prawidłowo alokowana
    if (!randomNums)
    {
        printf("Nie udało się alokować tablicy!\n");
        exit(1);
    }
// przegląda tablicę i przypisuje jej elementom
// losowe liczby z przedziału od 1 do 500
    for (i = 0; i < aSize; i++)
    {
        randomNums[i] = (rand() % 500) + 1;
    }
    biggest = 0;
    smallest = 500;
    for (i = 0; i < aSize; i++)
    {
        total += randomNums[i];
        if (randomNums[i] > biggest)
        {
            biggest = randomNums[i];
        }
        if (randomNums[i] < smallest)
        {
            smallest = randomNums[i];
        }
    }
    average = ((float)total)/((float)aSize);
    printf("Najwieksza liczba: %d.\n", biggest);
    printf("Najmniejsza liczba: %d.\n", smallest);
    printf("Srednia: %.2f.\n", average);
    free(randomNums);
    return(0);
}