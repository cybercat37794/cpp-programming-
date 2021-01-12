#include <iostream>
using namespace std;

int main()
{

    int UserNumber;
    int id;
    int loop;
    int Grade;
    char crack;


    for(loop=1; loop<100; loop++)
    {


        cout << "Enter the marks you got on that test: ";
        cin >> UserNumber;
        cout<<"you  entered marks "<<UserNumber<<endl;
        cout << "\n\n";


        cout<<"Enter your ID: ";
        cin >>id;
        cout<<"your id : "<<id<<endl;
        cout<<"\n\n";


        if (UserNumber >= 90 && UserNumber <= 100)
        {
            Grade = '1';
        }

        else if (UserNumber >= 85 && UserNumber <= 89)
        {
            Grade = '2';
        }

        else if (UserNumber >= 80 && UserNumber <= 84)
        {
            Grade = '3';
        }

        else if (UserNumber >= 75 && UserNumber <= 79)
        {
            Grade = '4';
        }

        else if (UserNumber >= 70 && UserNumber <= 74)
        {
            Grade = '5';
        }
        else if (UserNumber >= 65 && UserNumber <= 69)
        {
            Grade = '6';
        }

        else if (UserNumber >= 60 && UserNumber <= 64)
        {
            Grade = '7';
        }
        else if (UserNumber >= 50 && UserNumber <= 59)
        {
            Grade = '8';
        }
        else if (UserNumber < 50)
        {
            Grade = '9';
        }
        else
        {
            Grade = '10';
        }


        switch (Grade)
        {
        case '1':
            cout << "Perfect! You got A+ " << endl;
            cout << "your grade point is : 4.00 "<<endl;
            cout << "\n";
            break;
        case '2':
            cout << "Perfect! You got A " << endl;
            cout << "your grade point is : 3.75 "<<endl;
            cout << "\n";
            break;
        case '3':
            cout << "You got B+ " << endl;
            cout << "your grade point is : 3.50 "<<endl;
            cout << "\n";
            break;
        case '4':
            cout << "You got B " << endl;
            cout << "your grade point is : 3.25 "<<endl;
            cout << "\n";
            break;
        case '5':
            cout << "You got C+ " << endl;
            cout << "your grade point is : 3.00 "<<endl;
            cout << "\n";
            break;
        case '6':
            cout << "You got C " << endl;
            cout << "your grade point is : 2.75 "<<endl;
            cout << "\n";
            break;
        case '7':
            cout << "You got D+ " << endl;
            cout << "your grade point is : 2.50 "<<endl;
            cout << "\n";
            break;
        case '8':
            cout << "Better luck next time! You got D " << endl;
            cout << "your grade point is : 2.25 "<<endl;
            cout << "\n";
            break;
        case '9':
            cout << "Better luck next time! You got F " << endl;
            cout << "your grade point is : 0.00 "<<endl;
            cout << "\n";
            break;

        case '10':
            cout << "Undefined value! Make sure it's a value from 0-100!";
            cout << "\n";
            break;


        }

        if ( UserNumber == 00 )
        {
            break;
        }

    }
    cout << "\n\n\n\t\t\t";
    return 0;
}
