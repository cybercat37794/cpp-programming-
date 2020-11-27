#include <iostream>
#include<iomanip>

using namespace std;

class Student
{
public:
    int id;
    double gpa;

    void display()
    {

        cout<<id<<" "<<fixed<<setprecision(2)<<gpa<<endl; //for printing float values with fixed
                                                          //number of decimal places through cout
    }

    Student(int x,double y) //constructor is declared
    {
        id=x;
        gpa=y;
    }
    Student()  //default constructor declare
    {
        cout<<"default constructor"<<endl;
    }

    ~Student()  //destructor is declare
    {
        cout<<"destructor is called"<<endl;
    }
};

int main()
{
    Student obj;

    Student Rashed(232,2.44);
    Rashed.display();

    Student shayan(343,4.00);
    shayan.display();

    return 0;
}
