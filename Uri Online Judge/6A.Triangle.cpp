#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int length[4];

    for(int i=0; i<4; i++)
    {
        cin>>length[i];
    }
    sort(length, length+4);

    if(length[0]+length[1]>length[2] || length[1]+length[2]>length[3])
    {
        cout<<"TRIANGLE"<<endl;
    }
    else if(length[0]+length[1]==length[2] || length[1]+length[2]==length[3])
    {
        cout<<"SEGMENT"<<endl;
    }
    else
    {
        cout<<"IMPOSSIBLE"<<endl;
    }


}
