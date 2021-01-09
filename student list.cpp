#include<iostream>
#include<string.h>
using namespace std;
class student
{
private:
    int id;
    string name;
    float CGPA;
public:
    student()
    {
        id=0;
        name="";
        CGPA=0;
    }
    student(int i,string n, float d)
    {
        id=i;
        name=n;
        CGPA=d;
    }
    void set_id(int i)
    {
        id=i;
    }
    void set_name(string n)
    {
        name=n;
    }
    void set_CGPA(float d)
    {
        CGPA=d;
    }
    void print_info()
    {
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"CGPA: "<<CGPA<<endl<<endl;
    }
};
int main()
{
    int i,j;
    for(i=0;i<10;i++){
    student s1;
    student s2(18111122,"A Rahman",3.00);
    student s3(18111133,"A Rahim",3.50);
    student s4(18111144,"MD",3.56);
    student s5(18111155,"A Jisan",3.53);
    student s6(18111166,"MD Rahat",3.55);
    student student_list[10];
    student merit_list [5];
    s1.set_id(18334455);
    s1.set_name("A Karim");
    s1.set_CGPA(4.00);
    s1.print_info();
    s2.print_info();
    s3.print_info();
    s4.print_info();
    s5.print_info();
    s6.print_info();
    cout<<"marit list: "<<endl;

     for(j=1;j<5;j++){
         s1.print_info();
    s2.print_info();
    s3.print_info();
    s4.print_info();
    s5.print_info();
     }
     }
    return 0;
}





