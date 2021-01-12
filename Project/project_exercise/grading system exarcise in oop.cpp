#include<iostream>
using namespace std;


class b1
{
    int subnumber;
    float number;
    float gpa;
    float grade;
    string student_name;
    string department;
    int student_ID;

public:
    int studentgpa();

};



int b1::studentgpa()
{

    string student_name;
    string department;
    int student_ID;
    int subnumber,i;
    float number;
    float gpa;
    float grade=0;


    for(i=1; i<=100; i++)
    {
        cout<<"\n";
        cout<<"Enter your name: ";
        cin>>student_name;
        cout<<"\n";


        cout<<"Enter your Department: ";
        cin>>department;
        cout<<"\n";


        cout<<"Enter your ID: ";
        cin>>student_ID;
        cout<<"\n";


        cout<<"how many subject in this semester?: ";
        cin>>subnumber;
        cout<<"\n\n\n";


        for(i=1; i<=subnumber; i++)
        {



            cout<<"enter the number(1-100) of subject"<<i<<":";
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


            else if(number>=55 && number<=59)
            {
                cout<<"you got D"<< endl;
                cout<<"CGPA: 2.25"<<endl;
                grade+=2.25;
            }


            else if(number>=50 && number<=54)
            {
                cout<<"you got E+" << endl;
                cout<<"CGPA: 2.00"<<endl;
                grade+=2.00;
            }


            else
            {
                cout<<"you failed in this course" << endl;
                cout<<"CGPA: 0.00"<<endl;
                grade+=0.00;
            }


            gpa=grade/subnumber;
        }

        gpa=grade/subnumber;
    }

    cout << "\n\nYour average CGPA is: "<< gpa << endl;

    cout<<endl;

    cout<<endl;

}


int main()
{
    b1 stu;
    stu.studentgpa();

    return 0;

}


