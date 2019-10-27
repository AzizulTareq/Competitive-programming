#include <iostream>

using namespace std;

int main(){

    int a, b;
    cin>>a>>b;
    int dig1 = 0, dig2 = 0;

    if(a == b){
        dig1 = a*100;
        dig2 = b*100;

        cout<<dig1<<" "<<dig2+1<<endl;
    }else if(b - a == 1){
        dig1 = a * 100;
        dig2 = b * 100;

        cout<<dig1+99<<" "<<dig2<<endl;
    }else if(a==9 && b==1){
        dig1 = a*100;
        dig2 = b*1000;
        cout<<dig1+99<<" "<<dig2<<endl;
    }

    else{
        cout<<-1<<endl;
    }






}
