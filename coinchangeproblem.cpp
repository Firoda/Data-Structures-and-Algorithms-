#include<iostream>
using namespace std;

int change(int V, int coins[], int m)
{
//    if(x == 0) return 0;
//     
//    int min = x;
//    
//    for(int i=0;i<n;i++)
//    {
//        if(x-arr[i]>=0)
//        {
//            int c;
//            if(cache[x-arr[i]]>=0)
//            {
//                c = cache[x-arr[i]];
//            }
//            else
//            {
//                c = change(x - arr[i], arr, n, cache);
//                cache[x-arr[i]] = c;
//            }
//            if(min>c+1)
//                min = c+1;
//        }
//    }
//    return min;

//	int table[v+1];
//	
//	for(int i=1;i<n;i++)
//		table[i] = INT_MAX;
//	table[0] = 0;
//	for(int i=1;i<=v;i++)
//	{
//		for(int j=0;j<n;j++)
//		{
//			if(arr[j]<=i)
//			{
//				int c = table[i-arr[j]];
//				if(c!=INT_MAX && c+1<table[i])
//					table[i] = c+1;
//			}
//		}
//	}
//	for(int i=0;i<v;i++)
//	{
//		cout << table[i]<<endl;
//	}
//	return table[v];






// table[i] will be storing the minimum number of coins 
    // required for i value.  So table[V] will have result 
    int table[V+1]; 
  
    // Base case (If given value V is 0) 
    table[0] = 0; 
  
    // Initialize all table values as Infinite 
    for (int i=1; i<=V; i++) 
        table[i] = INT_MAX; 
  
    // Compute minimum coins required for all 
    // values from 1 to V 
    for (int i=1; i<=V; i++) 
    { 
        // Go through all coins smaller than i 
        for (int j=0; j<m; j++) 
          if (coins[j] <= i) 
          { 
              int sub_res = table[i-coins[j]]; 
              if (sub_res != INT_MAX && sub_res + 1 < table[i]) 
                  table[i] = sub_res + 1; 
          } 
    } 
    return table[V]; 
}

int main()
 {
	//code
	int test;
	cin >> test;
	while(test--)
	{
	    int n,v;
	    cin >> v >> n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin >> arr[i];
	    cout <<"Answer is:" <<change(v, arr, n) << endl;
	}
	return 0;
}
