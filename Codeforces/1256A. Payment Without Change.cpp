    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    		int a,b,n,S;
    		cin>>a>>b>>n>>S;
    		int qu=S/n;
    		qu=min(qu,a);
    		S-=(qu*n);
    		if(S<=b)
    			cout<<"YES"<<endl;
    		else
    			cout<<"NO"<<endl;
    	}
    	return 0;
    }
