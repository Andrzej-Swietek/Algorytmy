//
// Created by Andrzej Świętek on 3/27/21.
//

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> bracia(1000005); //<ostatni z braci, pierwszy z braci>
    for(int i = 0; i<n; i++){
        int a;
        cin >> a;
        if(bracia[a].second == 0){
            bracia[a].second = i+1;
        }
        bracia[a].first = i+1;
    }
    sort(bracia.begin(), bracia.end());
    int ostatni = 0;
    int wynik = 0;
    for(int i = 0; i<1000005; i++){
        if(ostatni <= bracia[i].second && bracia[i].second != 0){
            wynik++;
            ostatni = bracia[i].first;
        }
    }
    cout << wynik << endl;

    return 0;
}