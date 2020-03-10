#include<iostream>
using namespace std;
int main()
 {
	//code
	int test;
	cin>> test;
	int arr[9];
	arr[0] = (int)'!';
	arr[1] = (int)'#';
	arr[2] = (int)'$';
	arr[3] = (int)'%';
	arr[4] = (int)'&';
	arr[5] = (int)'*';
	arr[6] = (int)'@';
	arr[7] = (int)'^';
	arr[8] = (int)'~';
	while(test--)
	{
	    int n;
	    cin >> n;
	    char temp[n];
	    bool arr3[9] = {false};
	    for(int i=0;i<n;i++)
	    {
	        cin >> temp[i];
	    }
	    for(int q=0;q<2;q++)
	    {
	        for(int i=0;i<9;i++)
	        {
	            char a = (char)arr[i];
	            for(int j=0;j<n;j++)
	            {
	                if(a == temp[j])
	                    cout << a << " ";
	            }
	        }
	        cout << endl;
	    }
	   
	}
	return 0;
} 
