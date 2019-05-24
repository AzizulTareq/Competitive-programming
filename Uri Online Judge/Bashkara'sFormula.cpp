#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float A, B, C;
    cin>>A>>B>>C;

    float R1=0, R2=0;

    R1 = (-B + sqrt(B*B - 4*A*C))/2*A;
    R2 = (-B - sqrt(B*B - 4*A*C))/2*A;

    float ans1=0, ans2=0;
    ans1 = sqrt(R1);
    ans2 = sqrt(R2);

    if(ans1 != 0)
    {
        cout<<"R1 = "<<ans1<<endl;
        cout<<"R2 = "<<ans2<<endl;
    }else
    {
        cout<<"Impossivel calcular"<<endl;
    }






}
