#include<iostream>
#include<string>

using namespace std;

int main(){

    string s;
    cin>>s;
    int suma = 0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a')
            suma++;

    }
    if((s.size()+suma)%2==1)
    {
        cout<<"NIE";
        exit(0);
    }
    int k;
    k = (s.size()+suma)/2;
    s.erase(k, s.size()-k);
cout << s;




    return 0;
}

//
// Created by Andrzej Świętek on 11/30/19.
//

