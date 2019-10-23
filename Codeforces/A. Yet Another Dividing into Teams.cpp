    #include <iostream>
    #include <algorithm>
    #include <iterator>

    using namespace std;


    int myfunc(int n){
        int arr[n];

        int i;
        for(i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int j=0; j<n; j++){
            for(int i = j+1; i<n; i++){
                if(arr[j] - arr[i] == 1 || arr[j] - arr[i] == -1){
                    return 2;
                }

            }

        }
        return 1;
    }



    int main(){

        int q;
        cin>>q;

        for(int i=0; i<q; i++)
    {
        int n;
        cin>>n;

        if(myfunc(n) == 2){
            cout<<2<<endl;
        }else{
            cout<<1<<endl;
        }
    }

    }
