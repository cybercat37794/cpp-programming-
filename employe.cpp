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
        id = 0;
        name ="";
        salary =0;
    }
    employee(int i,string n,string d)
    {
        id = i;
        name = n;
        salary=0;
    }
    employee(int i,string n,double d)
    {
        id = i;
        name = n;
        salary = d;
    }
    void set_id(int i)
    {
        id = i;
    }
    void set_name(string n)
    {
        name = n;
    }
    void set_salary(double d)
    {
        salary = d;
    }
    int get_id()
    {
        return id;
    }
    string get_name()
    {
        return name;
    }
    double get_salary()
    {
        return salary;
    }
    void print_info()
    {
        cout<<"ID: "<<id<<endl;
        cout<<"NAME: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl<<endl;
    }
};
int main()
{
    employee s1;
    employee s2(1811112,"A Rahman",50000);
    //employee employee_list[10];
    //employee merit_list[5];
    s1.set_id(181212121);
    s1.set_name("A Karim");
    s1.set_salary(60000);
    s1.print_info();
    s2.print_info();
    cout<<"ID: "<<s1.get_id()<<endl;
    cout<<"NAME: "<<s2.get_name()<<endl;
    cout<<"Salary: "<<s2.get_salary()<<endl<<endl;
    return 0;
}
