#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	vector<int> v;
	bool prime[n+1];
	memset(prime,true,sizeof(prime));
	
	for(int p=2;p*p<=n;p++){
	    if(prime[p]==true){
	        
	        for(int i=p*p;i<=n;i+=p){
	            prime[i] = false;
	        }
	    }
	}
	
	for(int i=2;i<=n;i++){
	    if(prime[i]){
	        v.push_back(i);
	    }
	}
	for(int i=0;i<v.size();i++)
		cout << v[i]<<" ";
	
	cout << "\n\n\n";

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            if(v[i]*v[j]<=n){
            cout<<v[i]<<" "<<w[j]<<" ";
            }
        }
    }
	cout<<'\n';
	}
	return 0;
}
