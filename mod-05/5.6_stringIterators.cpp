#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "hellooooo nabil";

    /*
    iterate by index---

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i];
    }

    */





    // iterate without index--

    for (auto IT = a.begin(); IT < a.end(); IT++)
    {
        cout << *IT;
    }

    return 0;
}