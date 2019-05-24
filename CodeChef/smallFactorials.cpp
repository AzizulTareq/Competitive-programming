#include <iostream>
#include <cstdio>

using namespace std;


int fact(int x)
{
    int sum=0;
    for(int i=1; i<=x; i++)
    {
        sum += (i-1)*x;
    }

    return sum;
}

int main()
{
   cout<<fact(5);


}
