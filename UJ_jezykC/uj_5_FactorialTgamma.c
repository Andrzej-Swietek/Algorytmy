#include <stdio.h>
#include <math.h>
#include <float.h>
double Factorial(int n) {
    double wynik = 1;
    double l = 2;
    while(l<=n)
    {
        wynik*=l;
        l++;
    }
    return wynik;
}


int main(){
    FILE * fptr;
    fptr = fopen("Ftest.dat" , "w+" );
    int N = 200;
    double Minerr = 0;
    double Maxerr = 0;
    double err = 0;
    fprintf(fptr,"DBL_MAX= %g\n",DBL_MAX);
    fprintf(fptr,"DBL_EPSILON= %g\n",DBL_EPSILON);
    for(int n=0; n<N;n++){
        fprintf(fptr,"n= %d ", n);
        fprintf(fptr,"fn= %g ",Factorial(n));
        fprintf(fptr,"fg= %g ", tgamma(n+1));
        err= (Factorial(n)/tgamma(n+1)-1);
        fprintf(fptr,"err= %g\n",err);

        if(err>Maxerr)
            Maxerr = err;
        if(err<Minerr)
            Minerr = err;

        if(isinf(Factorial(n)) || isnan(Factorial(n)) || isinf(tgamma(n+1)) || isnan(tgamma(n+1)))
            break;
    }
    fprintf(fptr,"Minerr= %g\n",Minerr);
    fprintf(fptr,"Maxerr= %g\n", Maxerr);
    fclose(fptr);
    return 0;
}