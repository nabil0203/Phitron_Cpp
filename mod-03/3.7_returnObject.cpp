#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int cls;
    double gpa;
    int roll;

    Student(int cls, double gpa, int roll)
    {
        this->cls = cls;
        this->gpa = gpa;
        this->roll = roll;
    }
};



Student func()                                      // return type is Student; bcz it's Student type class
{
    Student kaka(9, 7.32, 35);                      // object created in function
    return kaka;

}



int main()
{
    Student obj = func();                                               // calling function & receiving
    cout << obj.cls << " " << obj.gpa << " " << obj.roll << endl;


    Student rahim(5, 3.44, 77);
    cout << rahim.cls << " " << rahim.gpa << " " << rahim.roll << endl;


    return 0;
}