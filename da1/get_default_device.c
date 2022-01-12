// get and set default device is used
#include <stdio.h>
#include <omp.h>

int main( )
{
    omp_set_default_device(1);
    printf("%d\n", omp_get_default_device( ));
}