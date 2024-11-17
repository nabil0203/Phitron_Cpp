#include <bits/stdc++.h>
using namespace std;

int main()
{

    int *p = new int[5];                // Dynamic array declaration


    for (int i = 0; i < 5; i++)
    {
        cin >> p[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }

    return 0;
}