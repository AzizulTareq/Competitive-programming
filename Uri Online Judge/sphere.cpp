#include <iostream>
#include <iomanip>
//define pie = 3.14159;
using namespace std;

int main(){
    float r;
    double ans = 0;
    cin>>r;

    ans = (4/3.0)*3.14159*r*r*r;

    cout<<"VOLUME = "<<fixed<<setprecision(3)<<ans<<endl;



}
