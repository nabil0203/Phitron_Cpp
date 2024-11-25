#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "hello";                         // normal way



    // contructor calling Ways

    // 1
    string b("hellllllo");                      // passing value as a constructor
    cout << b << endl;


    // 2
    string c("helloooo", 4);                    // works as resize(4) function
    cout << c << endl;


    // 3
    string d = "hello world";
    string e(d, 4);                         // deletes first 4 elements of d
    cout << e << endl;


    // 4
    string f(5, 'A');
    cout << f << endl;                      // five size all A

    return 0;
}