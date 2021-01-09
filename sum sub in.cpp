#include<iostream>
#include<iomanip>
//function prototype
using namespace std;
float sum(float a,float b);
float sub(float a,float b);
float mul(float a,float b);
float div(float a,float b);
int main()
{
    float x,y;
    char z;
    int i;
    for(i=0; i<100; i++)
    {
        cout<<"enter num1: ";
        cin>>x;
        cout<<"\nenter num2: ";
        cin>>y;
        cout<<"\nenter operator: ";
        cin>>z;
        //#include<iomanip> needs to be added
        cout<<setprecision(2)<<std::fixed;//needs to specify only once
        switch(z)
        {
        case '+':
            cout<<"sum: "<<sum(x,y)<<endl;
            break;
        case'-':
            cout<<"sub: "<<sub(x,y)<<endl;
            break;
        case'*':
            cout<<"Mul: "<<mul(x,y)<<endl;
            break;
        case'/':
            cout<<"div: "<<div(x,y)<<endl;
            break;
        default:
            cout<<"invalid input";
            break;
            if(z=0)
            {
                break;
            }
        }
    }
    return 0;
}
float sum(float a,float b)
{
    return a+b;
}
float sub(float a,float b)
{
    return a-b;
}
float mul(float a,float b)
{
    return a*b;
}
float div(float a,float b)
{
    return a/b;
}
