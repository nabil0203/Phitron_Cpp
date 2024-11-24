#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "hello";
    string b = "hi";
    a = b;                            // coping b into a
    cout << a << endl;


    string c = "Hello World";
    c.erase(3, 2);                      // (from which index i want to delete, how many elements i want to delete)
    cout << c << endl;


    string d = "Nabil Ahmed";
    d.replace(6, 5, "Chowdhury");                       // (which index, how many elements i want to remove, replace with what)
    cout << d << endl;


    string e = "Ami pari na";
    // e.replace(4, 0, "Code");(same thing)
    e.insert(4, "code");                           // which index, what i want to insert
    cout << e;

    return 0;
}