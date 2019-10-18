#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    for(int k=0; k<t; k++){

    int a, b, c, sum = 0;
    cin>>a>>b>>c;

		while(c >= 2 && b >= 1) {
			sum+= 3;
			c-= 2;
			b--;
		} while(b >= 2 && a >= 1) {
			sum+= 3;
			b-= 2;
			a--;
		}

		cout<<sum<<endl;
    }



}
