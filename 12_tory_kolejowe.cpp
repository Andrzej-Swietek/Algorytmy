#include <iostream>
#include <vector>


using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;//liczba domkow
   vector<vector<int>>domek;
    vector<int>y;
    vector<int>x;
    int wynik= LLONG_MAX;

    for(int i=0;i<n;i++)
    {
        int xx,yy;
        cin>>xx>>yy;
        x.push_back(xx);
        y.push_back(yy);
    }
    domek.push_back(x);
    domek.push_back(y);



    sort(domek.begin(),domek.end());
    for(int i=0;i<n-1;i++){
        cout<<endl;
        for (int j = 0; j < n; j++) {
            cout<<domek[i][j];
        }
    }


    return 0;
}
