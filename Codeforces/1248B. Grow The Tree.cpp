#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){


    int n;
    int sum = 0;
    long long int x = 0;
    long long int y = 0;
    long long int result = 0;


    cin>>n;
if(1<=n && n<=100000){
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr, arr+n);

    sum = n/2;

    for(int i=0; i<sum; i++){
        x += arr[i];
    }

    for(int i=sum; i<n; i++){
        y += arr[i];
    }

    result = (x*x) + (y*y);
    cout<<result<<endl;
}



}
