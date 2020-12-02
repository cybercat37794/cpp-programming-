#include<iostream>
#include<string.h>
using namespace std;
class employe
{
private:
    int id;
    string name;
    double salary;
public:
    employe()
    {
        id=0;
        name="";
        salary=0;
    }
    employe(int i,string n, double d)
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
    employe s1;
    employe s2(18111122,"A Rahman",20000.00);
    employe employe_list[10];
    employe merit_list[5];
    s1.set_id(18334455);
    s1.set_name("A Karim");
    s1.set_salary(15000.00);
    s1.print_info();
    s2.print_info();
    return 0;
}

