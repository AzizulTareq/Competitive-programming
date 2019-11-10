    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	long long q,a,b,n,s,i,x;
    	cin>>q;
    	for(i=0;i<q;i++)
    	{
    		cin>>a>>b>>n>>s;
    		x=s%n;
    		x=s-x;
    		x=min(a*n,x);
    		s-=x;
    		if (b>=s)
    		{
    			cout<<"YES"<<endl;
    		}
    		else
    		{
    			cout<<"NO"<<endl;
    		}
    	}
    }
