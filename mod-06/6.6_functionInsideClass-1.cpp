#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;

    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }

    void hello()
    {

        cout << "Hello from " << name << endl;
    }
};

int main()
{
    Student sakib("Sakib Ahmed", 23);                    // calling constructor
    cout << sakib.name << endl;

    sakib.hello();                                      // calling hello() function from sakib object



    Student karim("Karim hossain", 23);                 // calling constructor
    cout << karim.name << endl;

    karim.hello();                                      // calling hello() function from karim object

    return 0;
}