#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str[] = {"Tareq"};

    for(int i=sizeof(str); i>0; i--)
    {
        cout<<str[i];
    }
}
