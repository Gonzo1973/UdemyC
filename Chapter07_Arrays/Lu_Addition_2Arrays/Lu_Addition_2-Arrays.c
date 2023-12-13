#include <stdio.h>
#include <stdint.h>

int main()
{
    float matrix1[2][3] = { {0.0F, 1.0F, 2.0F} , {3.0F, 4.0F, 5.0F}};
    float matrix2[2][3] = {{10.0F, 11.0F, 12.0F}, {13.0F, 14.0F,15.0F}};
    float matrix_sum[2][3];

    printf("\n\n");

    for (int i=0; i<2; i++ )
    {
        for (int j=0; j<3; j++)
        {
            printf ("%f\t", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    for (int i=0; i<2; i++ )
    {
        for (int j=0; j<3; j++)
        {
            printf ("%f\t", matrix2[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    for (int i=0; i<2; i++ )
    {
        for (int j=0; j<3; j++)
        {
            matrix_sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("\n\n");

    for (int i=0; i<2; i++ )
    {
        for (int j=0; j<3; j++)
        {
            printf ("%f\t", matrix_sum[i][j]);
        }
        printf("\n");
    }

    return 0;

}
