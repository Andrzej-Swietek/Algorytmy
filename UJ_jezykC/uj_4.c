#include <stdio.h>
#include <math.h>
#include <stdlib.h>


FILE * fptr;

int r8_seed = 123456789;

double r8_uniform_01() {
    const int i4_huge = 0x7FFFFFFF;
    const int i1 = 127773;

    r8_seed = 16807 * (r8_seed % i1) - r8_seed/i1 * 2836;
    if (r8_seed < 0) r8_seed += i4_huge;
    return r8_seed * 4.656612875e-10;
}
double r8_normal_01() {
    return sqrt(- 2.0 * log(r8_uniform_01())) * cos(2.0 * M_PI * r8_uniform_01());
}
double RandNormal(double avg, double std_dev) {
    return std_dev*r8_normal_01() + avg;
}

int main() {

    fptr = fopen("plik.txt","a");
    if(fptr ==0){
        printf("Blad pliku - kaplica");
        exit(1);
    }

    double i = 0;
    while(i<1000) {

        fprintf(fptr, "%lf \n",RandNormal(231.34567,55.0223));

        i++;
    }
    fclose(fptr);


    return 0;
}