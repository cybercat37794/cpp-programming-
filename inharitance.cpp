#include<iostream>
using namespace std;
class person
{
public:
    string name;
    int age;

    void display1()
    {
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;

    }
};

class student : public person
{
public :
    int ID;
    void display2()
    {
        cout<<"ID: "<<ID<<endl;
        display1();
    }
};
int main()
{
    student s1;
    s1.ID=101;
    s1.name="bad boy";
    s1.age=19;
    s1.display2();

    return 0;
}
