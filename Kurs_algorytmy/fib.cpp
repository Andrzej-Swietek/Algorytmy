// Rekurencja
// dla duzych liczb za wolne i pamiecio chłonne

// 0(2^n)
int fibRec( int n ){
    if ( i == 0 || n == 1 ) return n
    else return fib( n-1 ) + fib( n-2 )
}

int fibRec2( int n ){
    return n == 0 || n == 1 ? n : fib( n-1 ) + fib( n-2 )
}

// Iteracyjnie
// 0(n)
int fib(int n) {
    int poprzedni = 0, aktualny = 1, nowy = 1;
    for (int i = 0; i < n; i++) {
        nowy = poprzedni;
        poprzedni = poprzedni + aktualny;
        aktualny = nowy;
    }
    return poprzedni;
}

//O(n)