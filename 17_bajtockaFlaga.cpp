#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

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



int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<int>v;
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    int out = 0;
    int o = 0;
    int p = 0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(i%2==0)
            v.push_back(a);
        else
            v1.push_back(a);
    }
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
    int freq_v = freq(v);
    int freq_v1 = freq(v1);
    int ile_v = 0;
    int ile_v1 = 0;

    for(int j=0;j<v.size();j++)
    {
        if(v[j]==freq_v)
            ile_v++;
        else
            v2.push_back(v[j]);
    }


    for(int k=0;k<v1.size();k++)
    {
        if(v1[k]==freq_v1)
            ile_v1++;
        else
            v3.push_back(v1[k]);
    }
    if(v2.size()>=2)
        p = freq(v2);
    if(v3.size()>=2)
        o = freq(v3);
    int ile = 0;
    int ile1 = 0;
    for(int a=0;a<v2.size();a++)
    {
        if(v2[a]==p)
            ile++;
    }
    for(int b=0;b<v3.size();b++)
    {
        if(v3[b]==o)
            ile1++;
    }
    if(v2.size()==1)
        ile = 1;
    if(v3.size()==1)
        ile1 = 1;
    if(freq_v!=freq_v1)
        out = n - ile_v - ile_v1;
    else
        out = n - max(ile_v + ile1,ile_v1+ile);

    cout<<out;
}
