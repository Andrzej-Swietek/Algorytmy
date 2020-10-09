#include <iostream>

using namespace std;

int f(int n)
{
    int n1 = 0;
    int n2 = 1;
    if (n==1){
        return n1;
    }
    int nn=0;
    while(n > nn){
        if(n1+n2>n)
            return nn;
        nn = n1 + n2;
        n1 = n2;
        n2 = nn ;

    }

    return nn;
}


int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a;
        cin>>a;

    }
    n=10;
    cout <<  n - f(10);
    return 0;
}
