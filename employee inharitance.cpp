#include<iostream>
#include<string.h>
using namespace std;
class employee
{
private:
    int id;
    string name;
    double salary;
public:
    employee()
    {
        id=0;
        name=" ";
        salary=0;
    }
    employee(int i,string n, double d)
    {
        id=i;
        name=n;
        salary=d;
    }
    void set_id(int i)
    {
        id=i;
    }
    void set_name(string n)
    {
        name=n;
    }
    void set_salary(double d)
    {
        salary=d;
    }
    void print_info()
    {
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"salary: "<<salary<<endl<<endl;
    }
};
int main()
{

    employee s1(18334455,"A Karim",15000.00);
    employee s2(18111122,"A Rahman",20000.00);
    employee s3;
    s3.set_id(124578);
    s3.set_name("assad");
    s3.set_salary(12000.00);
    employee employe_list[10];
    employee merit_list[5];

    s1.print_info();
    s2.print_info();
    s3.print_info();
    return 0;
}

