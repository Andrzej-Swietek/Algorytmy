
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool sprawdz(int x,vector<int>z)
{
    int ile= 0 ;
    for(int i=0;i<z.size();i++)
    {
        if(x==z[i])
            ile++;
    }

    return ile > z.size()/2 ;
}
int main() {
    ios_base::sync_with_stdio(false);
    vector<int>v;
    vector<int>v1;
    int n;
    cin>>n;
    int lider=-1;
    vector<int>s; // sumy sufixowe
    vector<int>p; // sumy prefixowe
    p.push_back(0); // puszujemy 0 jak zawsze przy sumach x-fixowych
    p.push_back(0);
    s.push_back(0);
    s.push_back(0);
    int wynik = 0;

// Pobieramy dane
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
        v1.push_back(a);

    }
//    Sortowanko
    sort(v.begin(),v.end());
    int kandydat= v[n/2];
    if(sprawdz(kandydat,v))
        lider=kandydat;
    for(int j=1;j<=v.size();j++)
    {
        if(j>1)
            p.push_back(p[j-1]);
        if(v1[j-1]==lider)
            p[j]++;
    }
    for(int k=n;k>=1;k--)
    {
        if(k<v.size())
            s.push_back(s[v.size()-k]);
        if(v1[k-1]==lider)
            s[v.size()-k+1]++;
    }
    /*for(int y=1;y<=n;y++)
    {
        cout<<p[y]<<" "<<s[y]<<endl;
    }*/

    for(int l=1;l<=n;l++)
    {
        if((p[l]>= l/2 + 1) && (s[n-l]>= (n-l)/2 + 1))
            wynik++;
    }
    cout<<wynik;


}

// 6
// 4 3 4 4 4 2
//Odp 2