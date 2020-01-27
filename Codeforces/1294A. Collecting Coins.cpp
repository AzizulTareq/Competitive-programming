#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

    int a, b, c, n;
    cin>>a>>b>>c>>n;
    int sum1 =0, sum2=0, res1 = 0, res2 = 0;


    if(a>=b && a>=c){
        sum1 = a - b;
        b = a;
        sum2 = a - c;
        c = a;
    }else if(b>=a && b>=c){
        sum1 = b - a;
        a = b;
        sum2 = b - c;
        c = b;
    }else if(c>=a && c>=b){
        sum1 = c - a;
        a = c;
        sum2 = c - b;
        b = c;
    }

    res1 = sum1 + sum2;
    res2 = n - res1;

    if(res2 >= 0 && res2 % 3 == 0 || res1 == n){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    }




}
