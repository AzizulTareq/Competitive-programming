#include <iostream>

using namespace std;

int main(){
    int n, a, b, sum = 0, i, j, sum1 = 0;
    cin>>n;
    int arr[n-1];

    for(i=0; i<(sizeof(arr)/sizeof(*arr)); i++){
        cin>>arr[i];
    }

    cin>>a>>b;


    for(j=a-1; j<b-1; j++){
        sum += arr[j];
    }


    cout<<sum ;
    }



