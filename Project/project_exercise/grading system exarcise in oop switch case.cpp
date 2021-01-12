#include<iostream>
using namespace std;

class Student
{
public:

    int number;
    float point;
    char grade;
    int i;


    void display1()
    {
        for(i=1; i<100; i++)
        {
            cout<<"Enter your marks : ";
            cin>>number;
            number=number/5;

            switch(number)
            {
            case 20:
            case 19:
            case 18:
                cout<<"Congratulations!! your got A+"<<endl;
                cout<<"your grade point is 4.00 "<<endl;
                cout<<"\n\n";
                break;

            case 17:
                cout<<"Perfect! your got A"<<endl;
                cout<<"your grade point is 3.75 "<<endl;
                cout<<"\n\n";
                break;

            case 16:
                cout<<"your got B+"<<endl;
                cout<<"your grade point is 3.50 "<<endl;
                cout<<"\n\n";
                break;

            case 15:
                cout<<"your got B"<<endl;
                cout<<"your grade point is 3.25 "<<endl;
                cout<<"\n\n";
                break;

            case 14:
                cout<<"your got C+"<<endl;
                cout<<"your grade point is 3.00 "<<endl;
                cout<<"\n\n";
                break;

            case 13:
                cout<<"your got C"<<endl;
                cout<<"your grade point is 2.75 "<<endl;
                cout<<"\n\n";
                break;

            case 12:
                cout<<"Better luck next time! your got D+"<<endl;
                cout<<"your grade point is 2.50 "<<endl;
                cout<<"\n\n";
                break;

            case 11:
            case 10:
                cout<<"Better luck next time! your got D"<<endl;
                cout<<"your grade point is 2.25 "<<endl;
                cout<<"\n\n";
                break;

            case 9:
            case 8:
            case 7:
            case 6:
            case 5:
            case 4:
            case 3:
            case 2:
            case 1:
            case 0:
                cout<<"You got F"<<endl;
                cout<<"Your grade point is 0.00"<<endl;
                cout<<"You failed in this examination. Better luck next time!"<<endl;
                cout<<"\n\n";
                break;

            default :
                cout<<"Undefined value! Make sure it's a value from 0-100!"<<endl;
                cout<<"\n\n";
            }

            if(number == 00)
            {
                break;
            }
        }
    }
};

int main()
{
    Student s1;
    s1.display1();

    return 0;
}
