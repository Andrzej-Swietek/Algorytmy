//
// Created by Andrzej Świętek on 3/6/21.
//

//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main()
{

    int n, x;
    cin >> n >> x;
    vector<int> sznurki(n);
    for(int i = 0; i<n; i++){
        cin >> sznurki[i];
    }
    int ans = 0;
    while(sznurki.size() > 1){
        if(sznurki[sznurki.size()-1] < x){
            sznurki[sznurki.size()-2] += sznurki[sznurki.size()-1];
            sznurki.pop_back();
        }
        else{
            ans++;
            sznurki.pop_back();
        }
    }
    if(sznurki[0] >= x){
        ans++;
    }
    cout << ans << endl;
    return 0;
}