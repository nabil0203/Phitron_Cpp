#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a = 10;                     // static variable


    int *p = new int;               // dynamic variable; notebook A-69
    *p = 1001;
    cout << *p;

    return 0;
}