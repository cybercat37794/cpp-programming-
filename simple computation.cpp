#include<iostream>
using namespace std;
int main()
{
    const double cm_per_inch = 2.54;
    int length =1;
    while(length !=0)
    {
        cout<<"please enter a length in inches:";
        cin>>length;
        cout<<length<<"in.="
            <<cm_per_inch*length<<"cm.\n";

    }
    return 0;
}
