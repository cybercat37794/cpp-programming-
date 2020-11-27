#include<iostream>
#include<conio.h>

using namespace std;
class student
{
    public:
    int id;
    double gpa;
};

int main()
{
    student Rahim, Karim,Rifat,Shifat,Rabby;
    Rahim.id=16754555;
    Rahim.gpa=3.50;
    cout<<"Rahim's id : "<<Rahim.id<<" , Rahim's gpa : "<< Rahim.gpa<<endl;
    Karim.id=16855478;
    Karim.gpa=3.54;
    cout<<"Karim's id : "<<Karim.id<<" , Karim's gpa : "<<Karim.gpa<<endl;
    Rifat.id=167513555;
    Rifat.gpa=3.52;
    cout<<"Rifat's id : "<<Rifat.id<<" , Rifat's gpa : "<< Rifat.gpa<<endl;
    Shifat.id=167532555;
    Shifat.gpa=3.53;
    cout<<"Shifat's id : "<<Shifat.id<<" , Shifat's gpa : "<< Shifat.gpa<<endl;
    Rabby.id=167598545;
    Rabby.gpa=3.56;
    cout<<"Rabby's id : "<<Rabby.id<<" , Rabby's gpa : "<< Rabby.gpa<<endl;
    getch;
}
