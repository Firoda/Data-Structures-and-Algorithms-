#include<iostream>
#include<map>
using namespace std;
bool compare(map<pair<string, int>, int> p1, map<pair<string, int>, int> p2)
{
	if(p1->first.first == p2->first.first)
		return p1->first.second < p2->first.second
	return p1->first.first > p2->first.first;
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n;
		cin >> n;
		int num;
		string s;
		map<pair<string,int>, int> mp;
		for(int i=0;i<n;i++)
		{
			cin >> s >> num;
			mp[{s, num}]++;
		}
		sort(mp.begin(), mp.end(),compare);
		map<pair<string, int>, int> :: iterator it;
		for(it=mp.begin();it!=mp.end();it++)
		{
			cout<< it->first.first<<" "<<it->first.second<<" "<<it->second<<endl;
		}
	}
	return 0;
	
}
