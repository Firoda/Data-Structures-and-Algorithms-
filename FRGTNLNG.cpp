#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	int test = 0;
	cin >> test;
	while(test-->0)
	{
		int n,k,r;
		vector <string> phrase[55];
		cin >> n >> k;
		string forgotten[100];
		for(int i=0;i<n;i++)
		{
			cin >> forgotten[i];
		}
		
		for(int i=0;i< k; i++)
		{
			cin >> r;
			for(int j=0;i<r;j++)
			{
				string temp;
				cin >> temp;
				phrase[i].push_back(temp);
				
			}
		}
		
		for(int i=0;i<n;i++)
		{
			string answer = "NO";
			for(int j=0;j<k;j++)
			{
			for(int l=0;l<phrase[j].size();l++)
			{
				if(phrase[j][l] == forgotten[i]);
					answer = "YES";
			}	
				
			}
			cout << answer << (i == n-1 ? "\n" : " ");
		}
		
		
	}

	return 0;
}
