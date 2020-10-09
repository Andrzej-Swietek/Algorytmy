#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    long long z; // ilosc zapytań
    cin >> z;
    long long suma,m,l;
    for (long long i = 0; i < z; i++)
    {
        suma = 0; m=0; l = 0;
        vector<long long>v;


        long long n; // ilosc miast
        cin >> n;

        for (long long j = 0; j < n-1; j++)
        {
            int a; //kasa z miasta[i] do miasta[i+1]
            cin >> a;
            suma+=a;

            if(suma>m) m = suma;
            v.push_back(a);
        }

        suma=0;
        for (long long k = n-2; k >=0 ; k--)
        {
            suma+=v[k];
            if(suma > l) l= suma;
        }
        cout<< m+l << endl;
    }


    return 0;
}
//2
//3
//-1 -1
//ANS: 0
//5
//3 5 5 2
//ANS: 30