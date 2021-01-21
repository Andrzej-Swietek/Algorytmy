//
// Created by Andrzej Świętek on 1/16/21.
//

#include<iostream>
#include <vector>

#define ll long long

using namespace std;

ll nwd(ll a, ll b){
    return a == 0 ? b : nwd(b % a, a);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector <ll> v;

    while(n--)
    {
        int tmp;
        cin >> tmp;
        v.emplace_back(tmp);
    }
    for ( ll i : v ){

        for( int iterator=0; iterator < v.size(); iterator++ )
            cout << nwd( i, v[iterator]) << " ";

        cout << endl;
    }


    return 0;
}

// input:
//3
//6 15 7

// output:
//6 3 1
//3 15 1
//1 1 7