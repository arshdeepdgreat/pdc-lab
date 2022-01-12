// omp_get_num_procs.cpp
// compile with: /openmp
// 8 processor machine so output is 8
#include <stdio.h>
#include <omp.h>

int main( )
{
    printf("%d\n", omp_get_num_procs( ));
    #pragma omp parallel
        #pragma omp master
        {
            printf("%d\n", omp_get_num_procs( ));
        }
}