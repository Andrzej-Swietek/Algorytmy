#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;//liczba widzianych samochodow
    vector<int>v;
    vector<bool>leftyRighty;
    long long suma = 0;
    v.push_back(0);
    for (int i = 0; i < n; i++) {
        bool tmp;
        cin >> tmp;
        leftyRighty.push_back(tmp);
        v.push_back(v[v.size()-1]+int(tmp));
        //        v.push_back(v[v.size()-1]+tmp);
        // sumy prefixowe- odwolanie do ostatniej komorki wektora (na poczatku bedzie to v[1] potem v[2] ..)
        // sumy prefixowe dla ciagu an=n (1,2,3,4,5,6,7,8,9) czyli v = [ 0, 1 , 3, 6 , 10 ...]
    }
    for(int i=0;i<n;i++){


        if(leftyRighty[i]==0)
            suma+=v[v.size()-1]-v[i];//dla  ostatniej - dla i-tej

    }
    cout<<suma;

    return 0;
}
