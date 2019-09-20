#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    int i;
    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    int res0 = 0, res1 = 0, j;

    for(j=0; j<n; j++){
        if(arr[j] == 0){
            res0 = j;
        }
        else if(arr[j] == 1){
            res1 = j;
        }
    }

    if(res0>=res1){
        cout<<res1+1<<endl;
    }else{
        cout<<res0+1<<endl;
    }


}
