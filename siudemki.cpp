#include<iostream>
using namespace std;

bool check(int x)
{
    if(x%7==0)
        return true;
    else
    {
        int suma = 0;
        int p = to_string(x).length();
        for(int i=0;i<p;i++)
        {
            suma+=x%10;
            x/=10;
        }
        if(suma%7==0)
            return true;
    }

    return false;

}
int main()
{
    int sum = 0;
    ios_base::sync_with_stdio(false);
    int a,b;
    cin >> a >> b;
    for(int i=a;i<=b;i++)
    {
        sum+=check(i);
    }
    cout<<sum;



    return 0;
}//
// Created by Andrzej Świętek on 11/30/19.
//

