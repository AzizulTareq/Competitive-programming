#include <iostream>
#include <map>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    map <string, int> smap;
    string s;

    while(n--){
        cin>>s;

        if(smap[s] == 0){
            cout<<"OK"<<endl;
        }else{
            cout<<s<<smap[s]<<endl;
        }

        smap[s]++;
    }

}
