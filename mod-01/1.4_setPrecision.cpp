#include <iostream>
#include <iomanip> // for setprecision
using namespace std;
int main()
{

    double d = 25.349823345;

    cout << d << endl;                  // only shows 25.3498(4 by default)


    cout << fixed << setprecision(7) << d;                  // shows 7 digits after '.'

    // printf("%.7lf",d); [in c]

    return 0;
}