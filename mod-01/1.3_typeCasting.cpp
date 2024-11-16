#include <iostream>
using namespace std;
int main()
{

    char c = 'A';
    cout << c << endl;                // prints the charater directly

    cout << (int)c << endl;           // prints the ascii; this is "Typecasting"



    int x = 97;
    cout << (char)x;                // Typecasting; print the char
    return 0;
}