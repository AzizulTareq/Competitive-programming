#include <iostream>

using namespace std;

int main()
{
    string S, E;
    int L, R;
    cin>>S>>E>>L>>R;

    int sum=0;
    sum=R-L;
    cout<<sum;

    if(sum>7)
    {
        cout<<"Many"<<endl;
    }

    if(L>R)
    {
        cout<<"Impossible"<<endl;
    }
}
