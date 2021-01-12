#include<iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    long long unsigned n;
    cin >> n;



    if( n  <= 2 ){
        cout << 2*n;
    }
    else {
        cout << n* (n-1) +1;
    }

    return 0;
/*   nwd(x,y) + nww(x+y) maxymalizujemy
x,y <= n


 nwd(x,y) <= min(x,y)
 nww(x,y) ~ x*y , NWD(x,y) = 1

 x: n-1
nww maxymalizuujemy
 x:= n
 y:= n -1

 n = 2 -> wynik = 2n
*/
}
