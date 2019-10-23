#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

int q;
cin>>q;

while(q--){
int n;
int sum = 0;
double avgD = 0;

cin>>n;

int arr[n];

for(int i=0; i<n; i++){
    cin>>arr[i];
}

for(int i=0; i<n; i++){
    sum += arr[i];
}



if(sum % n == 0){
    cout<<sum/n<<endl;
}else{
    cout<<(sum/n)+1<<endl;
}

}



}
