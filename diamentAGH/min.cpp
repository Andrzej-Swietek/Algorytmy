#include<iostream>
#include <vector>
#include <math.h>
using namespace std;

int operacja(vector<int> &a,int i){
    a[i]= floor(a[i]/2);
}
int largest(vector<int>arr, int n)
{
    int index = 0;
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max){
            max = arr[i];
            index= i;
        }
    return index;
}
int main() {
    ios_base::sync_with_stdio(false);
    int N, K;
    cin >> N >> K;
    vector<int>v;
    int maxInVec = 0;
    for(int i=0; i < N; i++)
    {
        int tmp;
        cin >> tmp;

        v.push_back(tmp);
    }

    for(int i=0; i<K; i++)
    {
        maxInVec = largest(v, N);
        operacja(v,maxInVec);
    }

    int sumka = 0;

    for(int i=0; i< N; i++)
    {
        sumka += v[i];
    }
    cout<<sumka;
    return 0;
}
//4 3
//20 7 5 4