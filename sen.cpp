#include<iostream>
#include<sstream>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
    string s;
    string t;
    int z = 0;

    cin>>s>>t;


    string hh1,mm1,hh2,mm2;
    hh1 = s;
    hh2 = t;
    mm1 = s;
    mm2 = t;
    hh1.erase(2,3);
    mm1.erase(0,3);
    hh2.erase(2,3);
    mm2.erase(0,3);
//    cout << hh1 << " - " << mm1 <<endl;
//    cout << hh2 << " - " << mm2 <<endl;



    int h1 = atoi(hh1.c_str());
    int m1 = atoi(mm1.c_str());
    int h2 = atoi(hh2.c_str());
    int m2 = atoi(mm2.c_str());



    int h = h1 - h2;
    int m = m1 - m2;

    if (m<0) {
        h--;
        m=60+m;
    }

    if (h < 0) h = 24+h;
//    cout << h1 << ":" << m1 <<endl;
//    cout << h2 << ":" << m2 <<endl;
string wynik = to_string(h)+':'+to_string(m);
if (wynik.size()==3)
{
    wynik.insert(0,"0");
    wynik.insert(3,"0");
}
else if(wynik.size()==4)
{

    if(wynik[1]==':') {
        wynik.insert(0, "0");
    }
    else {
        wynik.insert(3,"0");
    }
}

cout<<wynik;
}

//16:10
//10:50

//05:45
//00:00