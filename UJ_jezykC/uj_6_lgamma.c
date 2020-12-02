#include <stdio.h>
#include <math.h>
#include <float.h>


double BinCoeff(int n, int k) {
    if (n < k)
        return -1; // -1 oznacza błąd w podanych danych
    else {

        double wynik = 1;
        double factk = 1;
        double lk = 2;
        while (lk <= k) {
            factk *= lk;
            lk++;
        }
        for (int i = n - k; i < n; i++) {
            wynik *= (i + 1);


        }
        return wynik / factk;
    }
}


int main(){
    FILE * fptr;
    fptr = fopen("BCtest.dat" , "w+" );

    fprintf(fptr,"DBL_MAX= %g\n",DBL_MAX);
    fprintf(fptr,"DBL_EPSILON= %g\n",DBL_EPSILON);
    double Minerr1 = 0;
    double Maxerr1 = 0;
    double err1 = 0;
    double Minerr2 = 0;
    double Maxerr2 = 0;
    double err2 = 0;
    int N = 150;
    for(int k=1; k<=N;k++) {
        fprintf(fptr,"k= %d ", k);
        fprintf(fptr,"bc= %g ", BinCoeff(N, k));
        fprintf(fptr,"fg= %g ", tgamma(N + 1)/(tgamma(k+1)*tgamma(N-k+1)));
        fprintf(fptr,"flg= %g ", pow(M_E,lgamma( N+1))/(pow(M_E,lgamma( k+1))*pow(M_E,lgamma( N-k+1))));
        err1= (BinCoeff(N, k)/(tgamma(N + 1)/(tgamma(k+1)*tgamma(N-k+1))))-1;
        fprintf(fptr,"err1= %g ", err1);
        err2= (BinCoeff(N, k)/(pow(M_E,lgamma( N+1))/(pow(M_E,lgamma( k+1))*pow(M_E,lgamma( N-k+1)))))-1;
        fprintf(fptr,"err2= %g\n", err2);
        if(err1>Maxerr1)
            Maxerr1 = err1;
        if(err1<Minerr1)
            Minerr1 = err1;
        if(err2>Maxerr2)
            Maxerr2 = err2;
        if(err2<Minerr2)
            Minerr2 = err2;

        if(isinf(BinCoeff(N, k)) || isinf(tgamma(N + 1)/(tgamma(k+1)*tgamma(N-k+1))) || isinf(pow(M_E,lgamma( N+1))/(pow(M_E,lgamma( k+1))*pow(M_E,lgamma( N-k+1)))))
            break;
    }
    fprintf(fptr,"Maxerr1= %g\n",Maxerr1);
    fprintf(fptr,"Minerr1= %g\n",Minerr1);
    fprintf(fptr,"Maxerr2= %g\n", Maxerr2);
    fprintf(fptr,"Minerr2= %g\n", Minerr2);

    fclose(fptr);
    return 0;
}