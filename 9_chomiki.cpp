#include<iostream>
#include<vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n,m; // n- ilosc chomikow, m - ilosc przedzialow
    cin>>n>>m;
    vector<int>v;
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    vector<int>v4;

    // sumy prefixowe

    v.push_back(0);
    v1.push_back(0);
    v2.push_back(0);
    v3.push_back(0);
    v4.push_back(0);


    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(v[i]);
        v1.push_back(v1[i]);
        v2.push_back(v2[i]);
        v3.push_back(v3[i]);
        v4.push_back(v4[i]);
        switch(a)
        {
            case 1: v[i+1]++;// te wartosci obecne ktore spush_backowaliscmy
            case 2: v1[i+1]++;
            case 3: v2[i+1]++;
            case 4: v3[i+1]++;
            case 5: v4[i+1]++;
        }

    }


    for(int i=0;i<m;i++)
    {
        int k = 0;// odpowiedz na pytanie
        int a,b; // zakres przedzialu
        cin>>a>>b;

        if(v[b]-v[a-1]>0) //czy w tym przedziala znajduje sie chomik o wieku 1 (koniec - poczatku >0 jest chomik)
            k = 1;

        if(v1[b]-v1[a-1]>0 && k==0) //czy w tym przedziala znajduje sie chomik o wieku 2 itd..
            k = 2;

        if(v2[b]-v2[a-1]>0 && k==0)
            k = 3;

        if(v3[b]-v3[a-1]>0 && k==0)
            k = 4;
        if(k==0) //jesli zaden z tych warumkow sie nie spelnil k = 5
            k = 5;


        /*for(int j=a-1;j<b;j++)
        {
            if(v[j])
            {
                k = 1;
                break;
            }
            else if(v1[j])
            {
                if(k==0 || k>2)
                k = 2;

            }
            else if(v2[j])
            {
                if(k==0 || k>3)
                k = 3;
            }
            else if(v3[j])
            {
                if(k==0 || k>4)
                k = 4;
            }
            else if(v4[j])
            {
                if(k==0)
                k = 5;
            }
        }*/
        cout<<k<<endl;
    }








}