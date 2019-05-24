#include <iostream>

using namespace std;

int main(){

    int n, m;
    cin>>n>>m;
    int flag = 0;

    for(int i=n; i<=m; i++){
        for(int j=2; j<=i/2; j++){
            if(i%j == 0){
                cout<<j;
                flag = 1;
                break;
            }
        }
    }



}
