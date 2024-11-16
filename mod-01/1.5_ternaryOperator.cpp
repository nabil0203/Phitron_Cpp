#include <iostream>
using namespace std;
int main()
{

    int x = 6;

    /* if (x % 2 == 0)
         {
             cout << "Even";
         }
         else
             cout << "Odd";
    */

    (x % 2 == 0) ? cout << "Even" : cout << "Odd";          // doing the whole thing in 1 line

//  (condition)  ?  T     :      F

    return 0;
}