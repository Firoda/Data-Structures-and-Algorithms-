	#include <cmath>
	#include <cstdio>
	#include <vector>
	#include <iostream>
	#include <algorithm>
	#include <map>
	using namespace std;
	
	
	int main() {
	    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
	   int n;
	   string s,query;
	   long int num;
	   map<string, long int> Phone;
	   cin >> n;
	   for(int i=0;i<n;i++)
	   {
	   		cin >> s >> num;
	   		Phone.insert(pair<string, int>(s,num));
	   }
	   while(cin>>query)
	   {
	   	cin >> query;
	   	map<string, long int>::iterator fin = Phone.find(query);
	   	if(fin == Phone.end())
	   		cout << "Not found" << "\n";
	   	else
	   		cout<<fin->first<<"="<<fin->second<<"\n";
	   }
	    return 0;
	}

