#include<iostream>
using namespace std;
class Student
{
public :
    string name;
    int id;
    double gpa;

    void display()
    {
        cout<<name<<" "<<id<<" "<<gpa<<endl;

    }
    Student(string x,int y,double z)
    {
        name=x;
        id=y;
        gpa=z;

    }
};




int main()
{
    Student BadBoy("Bad Boy",30,3.52);
    BadBoy.display();

    Student BadGirl("Bad Girl",11,3.50);
    BadGirl.display();

    return 0;

}
