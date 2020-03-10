#include<iostream>
using namespace std;
int main()
 {
	//code
	int test;
	cin >> test;
	while(test--)
	{
	    int n;
	    cin >> n;
	    int temp,temp2;
	    int flag = 0;
	    for(int i=0;i<n;i++)
	    {
	        cin >> temp;
	        if(i == 0)
	        {
	            temp2 = temp;
	        }
	        if(temp2 > temp)
	        {
	            flag = 1;
	            cout << 0 <<endl;
	            break;
	        }
	        else
	            temp2 = temp;
	    }
	    if(!flag)
	        cout << 1 << endl;
	}
	return 0;
}
