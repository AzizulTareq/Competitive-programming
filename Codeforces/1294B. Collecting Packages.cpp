        #include<bits/stdc++.h>
        using namespace std;

        typedef long long ll;

        int main(){
        	ll t;
        	cin >> t;
        	while(t--){
        		ll n;
        		cin >> n;
        		vector< pair<ll,ll> > v;
        		int x,y;
        		for(int i=0; i<n; i++){
        			cin >> x >> y;
        			v.push_back(make_pair(x,y));
        		}
        		sort(v.begin(), v.end());
        		string s="";
        		int i=0, j=0, k=0;
        		while(k<v.size()){
        			if(i>v[k].first || j>v[k].second)
        				break;
        			while(i<v[k].first){
        				i++;s+='R';
        			}
        			while(j<v[k].second){
        				j++;s+='U';
        			}
        			k++;
        		}
        		if(k!=v.size()){
        			cout << "NO\n";
        		}else{
        			cout << "YES\n";
        			cout << s<< endl;
        		}
        	}
        }
