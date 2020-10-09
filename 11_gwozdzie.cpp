#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    int n,k;//n - ilosc gwozdzi, k - ilosc uderzen
    cin >> n>>k;
    vector<int>deska;
    int o = 1;
    int g = 1;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        deska.push_back(a);//wysokosci gwozdzi na poczatku
    }
    sort(deska.begin(),deska.end());
    if(k>n)
        k = n-1;
    deska.erase(deska.end()-k, deska.end()); // wywalamy ostatnie k elementów
    for(int i=0;i<deska.size()-1;i++)
    {
        if(deska[i]==deska[i+1]) {
            o++;
            g = max(g, o);
        }
        else
            o = 1;

    }
    cout<<k+g;


    return 0;
}
//6 2
//3 3 2 3 4 5