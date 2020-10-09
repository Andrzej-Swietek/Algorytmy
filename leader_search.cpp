#include<iostream>
#include <vector>
using namespace std;

bool sprawdz(int kandydat, vector<int> &a){
    int n = a.size();
    int ile = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == kandydat)
            ile++;
    return ile > n/2;
}

int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;

    vector<int>a;
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }



//  ---  O(n**2) --- ZNAJDOWANIE LEADERA
    int lider = 0-1;
    for(int k = 0; k < n; k++){
        if( sprawdz( a[k], a ) ){
            lider = a[k];
            cout << lider;
        }
    }
    cout <<endl<< lider;

// --- 0(nlog n) --- ZNAJDOWANIE LIDERA
    lider = -1;
    sort(a.begin(), a.end());
    int kandydat = a[n/2];
    if(sprawdz(kandydat, a))
    {
        lider = kandydat;
    }
    cout <<endl<< lider;

    return 0;
}
