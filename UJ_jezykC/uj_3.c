#include<stdio.h>
#include <math.h>

int r8_seed = 123456789;

// ==================================================================
/// \returns a unit uniform pseudo-random
double r8_uniform_01() {
    const int i4_huge = 0x7FFFFFFF;
    const int i1 = 127773;

    r8_seed = 16807 * (r8_seed % i1) - r8_seed/i1 * 2836;
    if (r8_seed < 0) r8_seed += i4_huge;
    return r8_seed * 4.656612875e-10;
}

// ==================================================================
/// \returns a unit normal pseudo-random
double r8_normal_01() {
    return sqrt(- 2.0 * log(r8_uniform_01())) * cos(2.0 * M_PI * r8_uniform_01());
}

// ==================================================================
/// \returns a normal pseudo-random
double RandNormal(double avg, double std_dev) {
    return std_dev*r8_normal_01() + avg;
}

int main(){

    for (double i = 0.0; i < 10 ; ++i) {
        printf("%g \n", RandNormal(i,10) );
    }


    return 0;
}