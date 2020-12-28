#include <iostream>
using namespace std;

int main()
{
    int i,j;

    for(i=0; i <= 4; i++)
    {
        for(j=0; j <= (i*2); j++)
        {
            cout<<"*";
            if((i == j)&& (i != 4) )
                cout<<"";

        }
        cout<<endl;
    }
    return 0;
}
