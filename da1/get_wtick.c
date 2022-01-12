// omp_get_wtime.cpp
// compile with: /openmp
//get_wtick and get_wtime are done
#include "omp.h"
#include <stdio.h>

int main() {
    double start = omp_get_wtime( );
    double end = omp_get_wtime( );
    double wtick = omp_get_wtick( );

    printf("start = %.16g\nend = %.16g\ndiff = %.16g\n",
             start, end, end - start);

    printf("wtick = %.16g\n1/wtick = %.16g\n",
             wtick, 1.0 / wtick);
}