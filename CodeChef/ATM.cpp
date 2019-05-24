#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int X, Y;
    double sum=0;
    cin>>X>>Y;

    if(X%5==0)
    {
        sum= (Y-X)-0.50;
        cout<<fixed<<setprecision(2)<<sum<<endl;
    }
}
