#include <stdio.h>

int main()
{
    int numbers[4]; // Array mit Länge 4 (4Werte) wird definiert

    for (int i = 0; i < 4; i++)   // zählt von 0 bis 3 (-> 4 Werte) - da dieser Index bei 0 startet
    {
        numbers[i] = 1337;
    }

    for (int i = 0; i < 4; i++)
    {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    int numbers2[4] = {13, 12, 11, 10};

    for (int i = 0; i < 4; i++)
    {
        printf("numbers2[%d] = %d\n", i, numbers2[i]);
    }

    int numbers3[4] = {13, 12, 11};

    for (int i = 0; i < 4; i++)
    {
        printf("numbers3[%d] = %d\n", i, numbers3[i]);
    }

    return 0;
}
