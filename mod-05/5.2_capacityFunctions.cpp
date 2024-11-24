// check the 5.0 txt file

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "Hello World";
    cout << a.size() << endl;                    // shows size



    string b = "I can code";
    b.clear();                                  // cleans the string
    cout << b.size() << endl;



    string c = "Let study regularly";
    if (c.empty() == true)                      // checks empty or not
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }



    string d = "Hello World";
    d.resize(4);                            // resizes the string
    cout << d.size() << endl;

    return 0;
}