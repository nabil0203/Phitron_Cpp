// static array can't be returned form other function
// that's why Dynamic array is used


#include <bits/stdc++.h>
using namespace std;

int *func()                         // returning the address of array; so '*' is needed
{
    int *p = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> p[i];
    }

    return p;
}

int main()
{
    int *a = func();                    // receives address, so pointer needed

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}