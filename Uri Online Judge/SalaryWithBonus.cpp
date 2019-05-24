#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    string name;
    double salary;
    double totalSale;

    cin>>name;
    cin>>salary;
    cin>>totalSale;

    double totalSalary = salary+ ( totalSale*15/100);

    cout<<setprecision(2)<<fixed;
    cout<<"TOTAL = R$ "<<totalSalary<<endl;




}





