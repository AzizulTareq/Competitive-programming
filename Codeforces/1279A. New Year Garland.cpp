
    #include <iostream>

    using namespace std;

    int main(){

        int t;
        cin>>t;

        while(t--){

        int r, g, b;
        cin>>r>>g>>b;
        int sum1 = 0, sum2 = 0, sum3=0, sum4 = 0,
        sum5 = 0, sum6 = 6;

        sum1 = g+b;
        sum2 = r - sum1;

        sum3 = r+b;
        sum4 = g - sum3;

        sum5 = r+g;
        sum6 = b - sum5;


        if(sum2 > 1 || sum4 > 1 || sum6 > 1){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
        }



    }
