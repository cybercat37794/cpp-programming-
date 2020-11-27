#include<iostream>
using namespace std;
const double CENTIMETERS_PER_INCH =2.54;
const int INCHES_PER_FOOT = 12;
int main()
{
    //declare variables
    int feet,inches;
    int totalInches;
    double centimeter;

    //statements: step 1 - step 7
    cout<<"Enter two integers, one for feet and "<<"one for inches:";
    cin>> feet>>inches;
    cout<<endl;

    cout<<"The numbers you entered are "<<feet<<" feet "<<inches<<" inches."<<endl;
    totalInches=INCHES_PER_FOOT *feet + inches;

    cout<<"The total number of inches ="<<totalInches<<endl;
    centimeter= CENTIMETERS_PER_INCH* totalInches;

    cout<<"The number of centimeters = "<<centimeter<<endl;

    return 0;
}
