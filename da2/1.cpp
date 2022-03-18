#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
   int sum = 0;
   int a[100];
double start; 
double end; 
start = omp_get_wtime(); 

for(int i = 0; i < 100; i++){
       a[i] = i + 1;
   }
   #pragma omp parallel reduction (+:sum)
   {
        #pragma omp for schedule(auto)
        for(int i = 0; i < 100; i++){
           sum = sum + a[i];
        }  
    }
    printf("The total sum is %d\n\n\n", sum);

end = omp_get_wtime(); 
printf("Work took %f seconds\n", end - start);
}