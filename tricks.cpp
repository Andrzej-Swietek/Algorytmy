#include<iostream>
#include <vector>
#include <map>
#include <array>
#include <set>
#include <deque>

//#include <bits/stdc++.h>

using namespace std;

#define what_is(x) cerr<< #x << " is " << x << endl;
#define my_for(i,n) for(i=0; i < n; i++)
#define my_for_p(i, k, n) for(i=k; i < n; i++)
#define ll long long

// -- READING multiple arguments of unknows am ount and type
template <typename... T>
void read(T&... args){
    ((cin >> args), ...);
}
// -----
// -- Writing multiple arguments of unknows amount and type
template <typename... T>
void write(T&&... args){ // rvaluue reference (new in cpp)
    ((cout << args << " "), ...);
}
// -----

// Load data to vector -- r-value -- dont use
vector< int > load_vector ( vector< int >&& v )
{
//    no constructor
    for (int i = 1; i <= 1000 ; ++i) {
        v.push_back(i); // 0 allocation
    }
    return move(v);
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

//  1.  auto a;
    vector< int > m = { 2,3,5,7 };
    for( auto i = m.begin(); i < m.end(); ++i )
    {
        //  Something to do
    }


//  2.  Init containers by par of {}
    vector< int > primeDigits = { 2,3,5,7 };
    vector< string > days = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };
    pair< int, int > p = { 1, 2 }; // p = mke_pair(1,2)

    map < int, string > numeral = {
            { 0, "zero" },
            { 1, "one" },
            { 2, "two" },
            { 3, "three" },
            { 4, "four" },
            { 5, "five" },
            { 6, "six" }
    };

// 3. range based for loop

    //    basic example
    int container[5] = { 1,2,3,4,5 }; // any type of container
    for( auto x: container)
    {
        cout << x << endl;
    }

    vector < int > v ;
    v = { 1,2,3,4,5 };
    for( auto i: v)
    {
        cout << "Vector auto: " << i << endl;
    }

    array < int, 4 > a;
    a = { 1,2,3,4};
    for( auto i: a)
    {
        cout << "Array auto: " << i << endl;
    }


    set < int > s;
    s = { 4 ,5 , 6, 7 };
    for( auto i: s)
    {
        cout << "Set auto: " << i << endl;
    }


    deque < vector < pair<int,int> > > d;
    for (auto i : d)
    {
        for (auto j : i)
        {
            cout << j.first << j.second << endl;
        }
    }

// 4. name of the variable

    // macro defined on the top of the code
    int variable = 365;
    what_is(variable);
        //  output: "variable is 365"
    what_is(variable * 2 - 1);
        //  output: "variable * 2 - 1 is 729"


// 5.  Euclidean Algorithm
    int num1 = 15; int num2 = 17;
//    __gcd(num1, num2);

// 6. Instead of if(condition) x++; use: x += (condition);
    int num_a, num_b = 0;
    if( 1 < 2 ) num_a++;
    num_b += ( 1 < 2);

// 7. Pi value
//const double pi = 2*acos(0.0);

// 8. Sorting
//    arr
    int arr_to_sort[5] = { 99, 62, 84,  0 ,5};
    sort(arr_to_sort, arr_to_sort+5);
//    vector
    vector<int> vector_xxx = { 5, 91, 45, 44, 1} ;
    sort( vector_xxx.begin(), vector_xxx.end());

// 9. Lambda functions:     [](type1 name1, type2 name2) { some stuff to do }
    // Sorting in decreasing order
    sort( a.begin(), a.end(), [](int a, int b){return a>b;} );

// 10. emplace_back -- faster push_back , doesnt use tmp variable
    v.emplace_back(10);


//    declarations --funny
    int var_a(200), var_b(20);
    cout << var_a << var_b << endl;

//    read void executtion
int x,y,z,zz,zzz;
    read(x,y,z,zz,zzz);
    write(x,y,z,zz,zzz);

//    For macros
    int i, condition_num;
    cin >> condition_num;
    vector<int> thing(n,0);
    my_for(i, condition_num) cin >> thing[i];
    my_for_p(i, 1, condition_num+1) cout << thing[i-1] << " | " << endl;

// using while(t--) instead of for
    int t;
    cin >> t;
    while(t--)
    {
        //  do sth
    }

//    deque [ dek ] used for big amount of data

    return 0;
}
