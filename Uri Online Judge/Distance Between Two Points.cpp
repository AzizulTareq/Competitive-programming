#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    float x1, y1, x2, y2;
    double res = 0;
    cin>>x1>>y1;
    cin>>x2>>y2;

    res = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));

    cout<<fixed<<setprecision(4)<<res<<endl;



}
