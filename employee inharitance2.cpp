#include<iostream>
using namespace std;
class Employe
{

protected:
    string name;
    string namee;
    string id;

public:
    Employe()
    {
        name = "Employe list, ID, and salary";
    }
    showInfo()
    {
        cout<<name<<endl;
        cout<<namee<<endl;
        cout<<id<<endl;
    }
};

class Admin :
    public Employe
{

private:
    float salary;

public:
    Admin(float r)
    {
        name = "Admin";
        namee="MD.Karim ";
        id = "ID:03";
        salary = r;
    }
    showInfo()
    {
        Employe::showInfo();

        cout<<"salary: "<<salary<<endl<<endl;
    }
};
class Teacher :
    public Employe
{

private:
    float salary;

public:
    Teacher(float r)
    {
        name = "Teacher";
        namee="MD.Rahim";
        id = "ID:05";
        salary = r;
    }
    showInfo()
    {
        Employe::showInfo();
        cout<<"salary: "<<salary<<endl<<endl;
    }
};

class Assistant :
    public Employe
{

private:
    float salary;

public:
    Assistant(float r)
    {
        name = "Assistant";
        namee="MD.Jisan";
        id = "ID:03";
        salary = r;
    }
    showInfo()
    {
        Employe::showInfo();
        cout<<"salary: "<<salary<<endl<<endl;
    }
};

int main()
{

    Employe e1;
    e1.showInfo();

    Admin a1(30000);
    a1.showInfo();

    Teacher t1(50000);
    t1.showInfo();

    Assistant b1(20000);
    b1.showInfo();
}
