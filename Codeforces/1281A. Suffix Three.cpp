        #include<bits/stdc++.h>
        using namespace std;
        int main(){
        	int t=1;
        	cin >> t;
        	while(t-->0)
        	{
        		string s;
        		cin >> s;
        		if(s[s.length()-1]=='o')
        			cout << "FILIPINO" << endl;
        		else if(s[s.length()-1]=='u')
        			cout << "JAPANESE" << endl;
        		else
        			cout << "KOREAN" << endl;
        	}
        	return 0;
        }
