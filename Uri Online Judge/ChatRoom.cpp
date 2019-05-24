#include <iostream>
using namespace std;

int main(){
    const string greeting = "hello";
    string line; getline(cin, line);
    int a = 0, b = 0; string output = "NO";
    while(b < line.size()){
        if(line[b++] == greeting[a]){a++;}
        if(a >= greeting.size()){output = "YES"; break;}
    }
    cout << output << endl;
    return 0;
}


/*#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin>>s;


    if(s=="ahhellllloou")
    {
        cout<<"Yes"<<endl;
    }
    else if(s=="hlelo")
    {
        cout<<"No"<<endl;
    }
    return 0;
}
*/
