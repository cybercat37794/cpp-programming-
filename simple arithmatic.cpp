#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout<<"please enter a floating point number:";
    //promote for a number
    double n;//floating point variable
    cin>>n;
    cout<<"n=="<<n
        <<"\nn+1=="<<n+1
        <<"\nthree times n=="<<3*n
        <<"\ntwice n=="<<n+n
        <<"\nn squared=="<<n*n
        <<"\nhalf of n=="<<n/2
        <<"\nsquare root of n=="<<sqrt(n) //library function
        <<'\n';
    return 0;


}
