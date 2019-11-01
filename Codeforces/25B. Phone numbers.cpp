#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    string s;
    cin>>s;

    for(int i=0; i<n; i++){
        cout<<s[i];
        if(i % 2 == 1 && n-i>2){
            cout<<"-";
        }
    }

}
