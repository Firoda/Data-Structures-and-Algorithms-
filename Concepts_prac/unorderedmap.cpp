#include<bits/stdc++.h>
using namespace std;
int main()
{
	// Very wrong because in case of traversal unordered map gives very poor performance compared to ordered map
	string sq = "Lodha lelo chut maar lo gaand mein danda daal lo";
	unordered_map<string, int> qw;
	stringstream ss(sq);
	string word;
	while(ss >> word)
		qw[word]++;
		
	unordered_map <string, int> :: iterator itr;
	for(itr = qw.begin();itr != qw.end();itr++)
	{
		cout << "\n";
		cout <<itr->first << "\t" << itr->second <<"\n";
	}
	return 0;
}
