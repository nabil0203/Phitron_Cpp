#include <iostream>
using namespace std;
int main()
{

    int x;
    cin >> x;

    switch (x)
    {
    case 1:
        cout << "Sat";
        break;
    case 2:
        cout << "Sun";
        break;
    case 3:
        cout << "Mon";
        break;
    case 4:
        cout << "Tue";
        break;
    case 5:
        cout << "Wed";
        break;
    case 6:
        cout << "Thu";
        break;
    case 7:
        cout << "Fri";
        break;

    default:
        cout << "Invalid";
        break;
    }
    return 0;
}