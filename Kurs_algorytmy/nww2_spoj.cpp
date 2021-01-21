//
// Created by Andrzej Świętek on 1/16/21.
//

#include<iostream>
#include <stack>

#define ll long long

using namespace std;

ll nwd(ll a, ll b){
    return a == 0 ? b : nwd(b % a, a);
}
ll nww(ll a, ll b){
    return a*b / nwd(a,b);
}

void solve(){
    ll ileLiczb;
    stack <ll> stack;
    stack.push(1);
    cin >> ileLiczb;
    while(ileLiczb--){
        ll tmp;
        cin >> tmp;
        stack.emplace( nww(stack.top(),tmp) );
    }
    cout << endl << stack.top();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while(n--)
        solve();

    return 0;
}
