#include <stdio.h>
#include "Queue.h"

void menu(void)
{
    printf("\n");
    printf("1 - dodaj liczbe do kolejki (Enqueue)\n");
    printf("2 - odczytaj wartosc z poczatku kolejki (Front)\n");
    printf("3 - usun liczbe z kolejki (Dequeue)\n");
    printf("4 - sprawdz czy kolejka jest pusta\n");
    printf("5 - sprawdz czy kolejka jest pelna\n");
    printf("6 - koniec programu\n");
    printf("\n");
}

int main()
{
    int temp = 0;
    int option = 0;
    printf("KOLEJKA - implementacja w tablicy statycznej\n");
    while (1)
    {
        menu();
        scanf("%d", &option);

        switch (option)
        {
            case 1:
                if (!isQueueFull()) {
                    printf("Podaj wartosc: ");
                    scanf("%d", &temp);
                    Enqueue(temp);
                } else {
                    printf("Operacja niedozwolona – kolejka pelna!!!\n\n");
                }
                break;

            case 2:
                if (!isQueueEmpty()) {
                    temp = Front();
                    printf("Odczytana wartosc: %d\n", temp);
                } else {
                    printf("Operacja niedozwolona – kolejka pusta!!!\n\n");
                }
                break;

            case 3:
                if (!isQueueEmpty()) {
                    temp = Dequeue();
                    printf("Usunieta wartosc: %d\n", temp);
                } else {
                    printf("Operacja niedozwolona – kolejka pusta!!!\n\n");
                }
                break;

            case 4:
                if (isQueueEmpty()) {
                    printf("Kolejka jest pusta.\n");
                } else {
                    printf("Kolejka nie jest pusta.\n");
                }
                break;

            case 5:
                if (isQueueFull()) {
                    printf("Kolejka jest pelna.\n");
                } else {
                    printf("Kolejka nie jest pelna.\n");
                }
                break;

            case 6:
                return 0;

            default:
                printf("Wybierz wlasciwa opcje.\n\n");
                break;
        }
    }

    return 0;
}
