#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    int N, A, B, K, sum1=0, sum2=0, sum3 = 0, sumF=0;

    while(T--)
    {
        cin>>N>>A>>B>>K;
    }

    for(int i=1; i<=N; i++)
    {
        if(i%A==0)
        {
            sum1 += i;
        }
        else if(i%B==0)
        {
            sum2 += i;
        }
    }

    for(int i=1; i<=N; i++)
    {
        if(i%B==0)
        {
            sum2 += i;
        }
    }

    for(int i=1; i<=N; i++)
    {
        if(i%A==0 && i%B==0)
        {
            sum3 += i;
        }
    }

    sumF = sum1 + sum2 - sum3;

    if(sumF >= K)
    {
        cout<<"Win"<<endl;
    }
    else
    {
        cout<<"Lose"<<endl;
    }

}
