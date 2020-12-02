#include<iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int N,K;
    cin >> N >> K;
    vector<int>v;
    int iloscElementow = 0;
    for(int i=0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    for(int i=0; i<N; i++)
    {
        int currElement = v[i];
        bool maPare = false;
        for(int j=0; j<N; j++)
        {
            if((currElement >= v[j]-K && currElement <= v[j]+K) && (currElement !=v[j]) )
            {
                maPare = true;
                break;
            }
        }
        if(maPare) iloscElementow++;
    }
    cout<< iloscElementow;

    return 0;
}


//7 3
//5 5 7 9 15 2 15

//8 3
//5 5 7 9 15 2 15 70