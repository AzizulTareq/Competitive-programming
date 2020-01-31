    #include<bits/stdc++.h>
    using namespace std;
    int main(){
    	int t;
    	cin>>t;
    	while(t--){
    		int n;
    		cin>>n;
    		vector<int> a;
    		for(int i=2;i<sqrt(n);i++){
    			if(n%i==0){
    				a.push_back(i);
    				n=n/i;
    			}
    			if(a.size()==2)
    			break;
    		}
    		if(a.size()==0||a.size()==1)
    		cout<<"NO";
    		else{
    		a.push_back(n);
    		cout<<"YES"<<endl;
    		for(int i=0;i<3;i++)
    		cout<<a[i]<<" ";}
    		cout<<endl;
    	}
    }
