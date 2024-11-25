#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int math, english;

    Student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }

    void total_marks()
    {

        cout << "Total marks of " << name << " = " << math + english << endl;
    }
};

int main()
{
    Student sakib("Sakib Ahmed", 23, 88, 74);
    cout << sakib.name << endl;

    sakib.total_marks();




    Student karim("Karim hossain", 23, 98, 75);
    cout << karim.name << endl;

    karim.total_marks();

    return 0;
    
}