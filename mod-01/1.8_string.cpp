#include <iostream>
using namespace std;
int main()
{

    char s[100];
    cin.getline(s, 100);                // input with space; cin.getline(string, size)
    cout << s << endl;



    string x;                           // string class
    cin >> x; 
    cout << x << endl;                  // output only before space

    return 0;
}