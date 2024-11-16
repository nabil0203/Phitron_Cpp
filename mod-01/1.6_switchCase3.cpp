#include <iostream>
using namespace std;
int main()
{

    char x;
    cin >> x;

    switch (x)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "Vowel";
        break;
        
    default:
        cout << "Consonant";
        break;
    }

    return 0;
}