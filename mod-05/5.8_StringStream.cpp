#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin, a);
    cout << a << endl;



    stringstream ss(a);             // class obj(value)

    string word;
    while (ss >> word)
    {
        cout << word << endl;           //printing word by word
    }

    return 0;
}