#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
//    values 0/-1
    memset(arr, 0, sizeof(arr));
    cout << arr[2] << endl;


    char string1[] = "123456789";
    char an_arr[999999];

//    change first 3 bytes of string to X
    memset(string1, 'X', 3);
    cout << string1 << endl;


    return 0;
}