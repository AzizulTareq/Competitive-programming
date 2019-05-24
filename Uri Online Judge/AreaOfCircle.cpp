#include <iostream>
#include <iomanip>

using namespace std;

int main(){

double A, B, MEDIA = 0;


cin>>A;
cout<<("%.2f\n", A);
cin>>B;

cout<<A<<endl;
cout<<B<<endl;

MEDIA = (A+B)/2;

    cout<<setprecision(5)<<fixed;
    cout<<"MEDIA = "<<MEDIA<<endl;

}
