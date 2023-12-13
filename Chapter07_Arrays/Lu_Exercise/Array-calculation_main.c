#include <stdio.h>

#include "Array-calculations.h"

#define LENGTH 3

int main()
{

    int v[LENGTH] = {1, 2, 3};

    int min_v = minArray(v,LENGTH);
    int max_v = maxArray(v,LENGTH);
    float mean_v = (min_v + max_v) / 2.0F;

    printf("Min:\t %d",min_v);
    printf("\nMax:\t %d",max_v);
    printf("\nMean:\t %f",mean_v);

    return 0;
}
