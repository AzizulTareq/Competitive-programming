#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int num, hours;
    double amount, sum;

    cin>>num;
    cin>>hours;
    cin>>amount;

    sum = hours * amount;

    cout<<"NUMBER = "<<num<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"SALARY = U$ "<<sum<<endl;








}



