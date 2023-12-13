#include <stdio.h>

#include "Array-calculations.h"

int minArray(int *array,unsigned int length)
{
    int array_value_min = array[0];

    for (unsigned int i=0; i < length ; i++)
        {
            if (array[i] < array_value_min)
                array_value_min = array[i];
        }
    return array_value_min;
}

int maxArray(int *array,unsigned int length)
{
    int array_value_max = array[0];

    for (unsigned int i=0; i < length ; i++)
        {
            if (array[i] > array_value_max)
                array_value_max = array[i];
        }
    return array_value_max;
}
