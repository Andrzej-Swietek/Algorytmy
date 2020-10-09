#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string tmp;
        cin >> tmp;
        stack<char>nawiasy;

        for (int j = 0; j < tmp.size() ; j++){

            if(tmp[j] == ')' || tmp[j]== '}' || tmp[j]== ']'){
                if(nawiasy.empty()){
                    cout<< "NIE" <<endl;
                    break;
                }
            }
             if (tmp[j] == '(' || tmp[j]== '{' || tmp[j]== '['){


                nawiasy.push(tmp[j]);
            }


             if (tmp[j] == ')'){  //zamnikecie nawiasu ()
                  if (nawiasy.top()=='(') nawiasy.pop();
                  else {cout << "NIE" <<endl; break;}
            }
             if (tmp[j] == ']'){  //zamnikecie nawiasu []
                if (nawiasy.top()=='[') nawiasy.pop();
                else {cout << "NIE" <<endl; break;}
            }

             if (tmp[j] == '}'){  //zamnikecie nawiasu {}
                if (nawiasy.top()=='{') nawiasy.pop();
                else {cout << "NIE" <<endl; break;}
            }

            if(j==tmp.size()-1 && nawiasy.empty()){
                cout << "TAK" << endl;

            }
            if(j==tmp.size()-1 && nawiasy.size()!=0){
                cout << "NIE" << endl;
                break;
            }

        }

    }




    return 0;

}

//
//{[()()]}
//TAK
//
//([)(])
//NIE

//1
//[]{}[]([{}])

//(s{[]})