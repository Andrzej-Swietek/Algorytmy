#include <iostream>
#include <vector>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    int n;
    long long minimalna = 0;// wynik ostateczny
    cin >> n; // liczba osob w kolejce

    vector<long long>v;


    for (int i = n-1; i>=0 ;i--) {
        long long tmp;
       cin >> tmp;
       v.push_back(tmp);
    }


    long long najmniejsza_oferta_pozostala = v[n-1] + 1;
    for(int i = n-1; i>=0;i--){


        if(v[i]<najmniejsza_oferta_pozostala)
            najmniejsza_oferta_pozostala = v[i];

        minimalna+=najmniejsza_oferta_pozostala;
    }



    cout << minimalna;
    return 0;
}
//4
//5 2 4 3