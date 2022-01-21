#include <omp.h>
#include <stdio.h>

int main()
{
    int i, n, chunk;
    float a[3], b[3], result;
    result = 0.0;
    a[0] = 1;
    a[1] = 2;
    a[2] = 2;
    // vector 1i+2j+2k
    printf("Vector 1 is ");
    for (int i=0;i<3;i++)
    {
        printf("%f ", a[i]);
    }

    b[0] = 3;
    b[1] = 4;
    b[2] = -2;
    // vector 3i+4j-2k
    printf("\nVector 2 is ");
    for (int i=0;i<3;i++)
    {
        printf("%f ", b[i]);
    }

#pragma omp parallel for default(shared) private(i) schedule(static, chunk) reduction(+ \
                                                                                      : result)

    for (i = 0; i < 3; i++)
        result += (a[i] * b[i]);

    printf("\nDot product result= %f\n", result);
}