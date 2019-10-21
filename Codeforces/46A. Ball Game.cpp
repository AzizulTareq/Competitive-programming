#include <iostream>

using namespace std;

int main(){
    int n, num = 2;
    cin>>n;
    cout<<num;

    for(int i=2; i<n; ++i){
        num += i;

        if(num>n){
            num -= n;
        }
        cout<<" "<<num;
    }

}
