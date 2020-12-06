#include<iostream>
#include<iomanip>
using namespace std;   //function prototype


float sum(float a,float b);
float sub(float a,float b);
float mul(float a,float b);
float div(float a,float b);

int main()
{
    float x;
    float y;
    char z;
    int i;

    for(i=0; i<100; i++)
    {
        cout<<"enter num1: ";
        cin>>x;
        cout<<"\n";

        cout<<"enter num2: ";
        cin>>y;
        cout<<"\n";

        cout<<"enter operator: ";
        cin>>z;
        cout<<"\n";
        //#include<iomanip> needs to be added
        cout<<setprecision(2)<<std::fixed;  //needs to specify only once
        switch(z)
        {
        case '+':
            cout<<"sum: "<<sum(x,y)<<endl;
            cout<<"\n";
            break;

        case'-':
            cout<<"sub: "<<sub(x,y)<<endl;
            cout<<"\n";
            break;

        case'*':
            cout<<"Mul: "<<mul(x,y)<<endl;
            cout<<"\n";
            break;

        case'/':
            cout<<"div: "<<div(x,y)<<endl;
            cout<<"\n";
            break;

        default:
            cout<<"invalid input";
            break;
            if(z='a')
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

