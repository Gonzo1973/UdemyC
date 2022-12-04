#include <stdio.h>

void printEvenOrOdd(int number)
{
    if (number % 2 == 0)
    {
        printf("%d is even!\n", number);
    }
    else
    {
        printf("%d is odd!\n", number);
    }
}

int main()
{
    int a = 20;
    int b = 3;
    int c = 4;

    printEvenOrOdd(a);
    printEvenOrOdd(b);
    printEvenOrOdd(c);

    return 0;
}
