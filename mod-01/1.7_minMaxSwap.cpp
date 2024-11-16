#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int x, y;
    cin >> x >> y;

    cout << "Min = " << min(x, y) << endl;
    cout << "Max = " << max(x, y) << endl;

    cout << "Min = " << min({34, 5, 13, 5}) << endl;                    // when infinite value, use {}
    cout << "Max = " << max({45, 3, 5}) << endl;


    cout << "Before Swap x = " << x << ", " << "y = " << y << endl;

    swap(x, y);

    cout << "After Swap x = " << x << ", " << "y = " << y << endl;

    return 0;
}