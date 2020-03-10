#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, i = 0;
    string s, email;
    cin >> n;
    vector<string> k;
    regex e(".+@gmail+\\.com");
    while(n >0)
    {
        cin >> s;
        cin >> email;	
        bool match = regex_match(email, e);
        
        if(match)
            k.push_back(s);
    	n = n - 1;
    }
    //cout << "End of while loop" << "\n";
    sort(k.begin(), k.end());
    for(i=0;i<k.size();i++)
    {
    	//cout << i << endl;
       cout << k[i]<< "\n";
       // cout << "God help me ....!!!!"<<"\n";
    }
    return 0;
}
