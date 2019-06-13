#include <iostream>

using namespace std;

int main()
{
   int T;
   cin>>T;

   while(T--){

        string str;
        cin>>str;

    for(int i=0; i<str.size()/2; i+=2)
    {
        cout<< str[i];
    }
    cout<<endl;
   }




    return 0;
}
