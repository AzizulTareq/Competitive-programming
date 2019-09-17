#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main(){

    int n, result = 0;
    double sum1=0, sum2=0;
    cin>>n;

    sum1 = round(n/2);
    sum2 = n - sum1;

    result = (sum2*sum2) + (sum1*sum1);
    cout<<result<<endl;


    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i%2==1&&j%2==1)
            {
                if(j!=n)
                    printf("C");
                else
                    printf("C\n");
            }
            else if(i%2==1&&j%2==0)
            {
                if(j!=n)
                    cout<<".";
                else
                    cout<<"."<<endl;
            }
            else if(i%2==0&&j%2==0)
            {
                if(j!=n)
                    cout<<"C";
                else
                    cout<<"C"<<endl;
            }
            else if(i%2==0&&j%2==1)
            {
                if(j!=n)
                    cout<<".";
                else
                    cout<<"."<<endl;
            }
        }
    }

}
