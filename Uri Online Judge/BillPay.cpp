#include <iostream>
#include <cstdio>
#include <iomanip>


using namespace std;

int main(){

    double sum = 0;

    int code1, unit1, code2, unit2;
    float price1, total1=0,price2, total2=0;
   cin>>code1>>unit1;
    scanf("%2d", &price1);
    total1 = unit1*price1;

   cin>>code2>>unit2;
    scanf("%2d", &price1);
    total2 = unit2*price1;

    sum = total1 + total2;

    cout<<setprecision(2)<<fixed;
    cout<<"VALOR A PAGAR: R$ "<<sum<<endl;






}


