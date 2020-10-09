#include<iostream>
#include<vector>
#include<algorithm>
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
int freq(vector<int>v)
{
    int ile_teraz = 1;
    int ile = 1;
    int m = v[0];
    for(int i=1;i<v.size();i++)
    {
        if(v[i]==v[i-1])
            ile_teraz++;
        else
        {
            if(ile_teraz>ile)
            {
                ile = ile_teraz;
                m = v[i-1];
            }
            ile_teraz = 1;
        }
    }
    if(ile_teraz > ile)
    {
        ile = ile_teraz;
        m = v[v.size()-1];
    }
    return m;
}


int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<int>v;
    vector<int>v1;
    int k = 0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
        sort(v.begin(),v.end());
        if(sprawdz(v[v.size()/2],v))
            v1.push_back(v[v.size()/2]);
    }
    if(v1.size()<=n/2)
        cout<<"NIE";
    else
    {
        sort(v1.begin(),v1.end());
        int p = freq(v1);
        for(int h=0;h<v1.size();h++)
        {
            if(v1[h]==p)
                k++;
        }
        if(k>n/2)
            cout<<p;
        else
            cout<<"NIE";

    }

    return 0;
}