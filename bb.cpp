#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    char l[2];
    l[0] = 'b';
    l[1] = 'a';
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int p = 0;
        int g = 0;
        string x;
        cin>>x;
        for(int j=0;j<x.size();j++)
        {
            bool pp = p%2;
            if(x[j]==l[pp])
                p++;
            if(p==4)
            {
                cout<<"Tak"<<endl;
                g = 1;
                break;
            }
        }
        if(g==0)
            cout<<"Nie"<<endl;
    }

return 0;
}
