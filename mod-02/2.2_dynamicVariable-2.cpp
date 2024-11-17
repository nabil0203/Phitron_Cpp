#include <bits/stdc++.h>
using namespace std;

int func()
{
    int a = 10;
    return a;
}

int main()
{
    int x = func();                   // a value wont be returned; bcz Stack memory auto deletes; windows compiler will show the value, it's an error; check online complier
    return 0;
}