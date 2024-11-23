#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "Nabil";
    string b = "Ahmed";

    a += b;                 // a = a+b
    cout << a << endl;

    a.pop_back();           // deletes last element
    cout << a;

    return 0;
}