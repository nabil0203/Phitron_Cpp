#include <bits/stdc++.h>
using namespace std;

int func()
{
    int *p = new int;
    *p = 10;
    return *p;
}

int main()
{
    int x = func();                 // value will be returned; bcz heap memory doesn't auto deletes

    cout << x;
    return 0;
}