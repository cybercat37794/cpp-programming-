#include<iostream>
using namespace std;
class sectionb1
{
    int coursenumber;
    float number,gpa,grade;
    string name;
    string ID;
public:
    int studentgpa();
};
int sectionb1::studentgpa()
{
    string name;
    string ID;
    int coursenumber,i;
    float number,gpa,grade=0;
    for(i=1; i<=500; i++)
    {
        cout<<"Enter your name: "<<endl;
        cin>>name;
        cout<<"Enter your ID: "<<endl;
        cin>>ID;
        cout<<"how many course in this semester?:"<<endl;
        cin>>coursenumber;

        for(i=1; i<=coursenumber; i++)
        {

            cout<<"enter the number(1-100) of subject"<<i<<":"<<endl;
            cin>>number;
            if(number>=90 && number<=100)
            {
                cout<<"you got A+"<< endl;
                cout<<"CGPA: 4.00"<<endl;
                grade+=4;
            }

            else if(number>=85 && number<=89)
            {
                cout<<"you got A"<< endl;
                cout<<"CGPA: 3.75"<<endl;
                grade+=3.75;
            }
            else if(number>=80 && number<=84)
            {
                cout<<"you got B+"<< endl;
                cout<<"CGPA: 3.50"<<endl;
                grade+=3.50;
            }
            else if(number>=75 && number<=79)
            {
                cout<<"you got B"<< endl;
                cout<<"CGPA: 3.25"<<endl;
                grade+=3.25;
            }
            else if(number>=70 && number<=74)
            {
                cout<<"you got C+"<< endl;
                cout<<"CGPA: 3.00"<<endl;
                grade+=3.00;
            }
            else if(number>=65 && number<=69)
            {
                cout<<"you got C"<< endl;
                cout<<"CGPA: 2.75"<<endl;
                grade+=2.75;
            }
            else if(number>=60 && number<=64)
            {
                cout<<"you got D+"<< endl;
                cout<<"CGPA: 2.50"<<endl;
                grade+=2.50;
            }
            else if(number>=50 && number<=59)
            {
                cout<<"you got D"<< endl;
                cout<<"CGPA: 2.25"<<endl;
                grade+=2.25;
            }
            else
            {
                cout<<"you failed" << endl;
                cout<<"CGPA: 0.00"<<endl;
                grade+=0.00;
            }
            gpa=grade/coursenumber;
        }
        cout << "\n\nYour average CGPA is: "<< gpa << endl;
        cout<<endl;
        cout<<endl;
    }
}
int main()
{
    sectionb1 stu;
    stu.studentgpa();
    return 0;
}

