#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    int i;
    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    int count = 0;

    for(i=0; i<n; i++){

        if(arr[i] % 2 != 0){
            count++;
        }

        if(arr[i] % 2 == 0){
            cout<<arr[i]/2<<endl;
        }else if(count != 0 && count % 2 == 0 && arr[i] < 0){
            cout<<(arr[i]/2) - 1<<endl;
        }else if(count != 0 && count % 2 != 0 && arr[i] > 0){
            cout<<(arr[i]/2) + 1<<endl;
        }else{
            cout<<arr[i]/2<<endl;
        }
    }



}
