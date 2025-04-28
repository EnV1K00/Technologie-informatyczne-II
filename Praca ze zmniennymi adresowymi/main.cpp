#include <iostream>
#define SIZE 10

int main() {
    int numbers[SIZE]={15,3,36,42,58,22,95,44,76,101};
    for(int i=0; i<SIZE; i++)
    {
        int *ptr;
        ptr=numbers;
        printf("\nWprowadz wartosc dla wyrazu %d:",i);
        scanf("%d",ptr+i);
    }

    for(int i=0;i<SIZE;i++)
    {
        const int *ptr;
        ptr=numbers;
        printf("\nWyraz nr.%d: %d",i,*(ptr+i));
    }

    int sum=0;
    for (int i=0; i<SIZE; i++)
    {
        int *ptr;
        ptr=numbers;
        sum += *(ptr+i);
    }
    printf("\nSuma wynosi: %d",sum);

    float average = (float) sum/SIZE;
    printf("\nSrednia: %f",average );

    while (numbers[i]<=)
    {
        if (numbers[i]>numbers[i+1])
        {
            int c = *numbers[i];
            *numbers[i]=*numbers[i+1];
            *numbers[i+1]=c;
        }

    }

    return 0;
}
