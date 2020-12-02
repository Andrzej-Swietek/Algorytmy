#include<stdio.h>
#include <math.h>

int main() {

    double val = 0;
    double sum = 0;
    int n = 0;
    double sum1=0;
    while(scanf("%lf", &val) == 1)
    {
        sum+=val;
        n++;
        sum1 +=val*val;
    }

    printf("Suma = %g\n",sum);
    printf("%g\n",sum/n);
    printf("%g\n",sqrt(sum1/n-(sum/n)*(sum/n)));

    return 0;

}