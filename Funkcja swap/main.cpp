#include <iostream>

void swap1(int n1, int n2)
    {
    printf("\n\nProsta zamiana:");
    printf("\nn1=%d, n2=%d",n1,n2);
    int temp = n2;
    n2=n1;
    n1=temp;
    printf("\nn1=%d, n2=%d",n1,n2);
    }

void swap2(int *ptr1, int *ptr2)
    {
    int temp=*ptr2;
    *ptr2=*ptr1;
    *ptr1=temp;
    }
int main() {
   int a=3;
   int b=5;
   printf("\nWartosci podstawowe: a=%d, b=%d",a,b);
   swap1(a,b);
   printf("\nPo swap 1:a=%d, b=%d",a,b);
   swap2(&a,&b);
   printf("\nPo swap 2:a=%d, b=%d",a,b);
    return 0;
}
