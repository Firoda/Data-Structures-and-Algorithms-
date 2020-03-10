#include <bits/stdc++.h>
using namespace std;
void hipify(int a[],int k,int i){
    int l = 2*i+1;
    int r = 2*i+2;
    int small = i;
    if(l < k && a[l] < a[small])
        small = l;
    if(r < k && a[r] < a[small])
        small = r;
    if(small!=i){
        swap(a[small],a[i]);
        hipify(a,k,small);
    }
}
void findKMax(int a[],int n,int k){
    for(int i=0;i<k;i++){
        int ele = a[i];
        int j = i;
        while(j!=0 && a[(j-1)/2] > a[j]){
            swap(a[(j-1)/2],a[j]);
            j = (j-1)/2;
        }
    }
 
    for(int i=k;i<n;i++){
        if(a[0] < a[i]){
            swap(a[0],a[i]);
            hipify(a,k,0);
        }
    }
   
}
int main() {
    int t;
    cin >> t;
    while(t--){
	    int n,k;
	    cin >> n >> k;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
        }
        findKMax(a,n,k);
        sort(a,a+k,greater<int>());
        for(int i=0;i<k;i++)
             cout << a[i] << " ";
        cout << endl;
        
        
    }
	return 0;
}
