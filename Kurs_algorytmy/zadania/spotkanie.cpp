#include<iostream>
using namespace std;
int main(){
    const int CYKL = 60;

    int n;
    cin >> n;
    int fib[CYKL];
    fib[0]= 1;
    fib[1] = 1;

    for (unsigned i = 2; i < CYKL ; i++) {
        fib[i] = ( fib[i-1] + fib[i-2] )%10;
    }
//    // n = {4} === 4 wyraz fib
//    if ( n%60 == 1){
//        cout << fib[1]+fib[59];
//        return 0;
//    }
//    else if(n % 60 == 0){
//        cout << fib[0]+fib[58];
//        return 0;
//    }

    int wynik = (fib[n % CYKL] + fib[((n - 2 + CYKL) % CYKL]) % 10;
    cout<<wynik;

    return 0;
}