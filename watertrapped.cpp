#include<iostream>
using namespace std;

int watertrap(int arr[], int n)
{
    int trapped = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            int intial = arr[i];
            int j = i+1;
            if(j>n)
            	break;
            cout <<"Value of j;" <<j << endl;
            cout <<"Value of arr[j]:"<<arr[j]<<endl;
            while(arr[j]<arr[i])
            {
            	cout << "arr[j[    "<<arr[j]<<endl;
            	if(j == i+1 && arr[j] >= arr[i])
            	 	{
            	 		cout <<"Breaking here!!!!"<<endl;
						break;
					 }
                trapped+=(intial - arr[j]);
                j++;
                if(j>n)
                	break;
               
                	
            }
            if(j<n)
            	i = j;
        }
    }
    return trapped;
}

int main()
 {
	//code
	int test;
	cin >> test;
	while(test--)
	{
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin >> arr[i];
	    cout << watertrap(arr, n) << endl;
	}
	return 0;
}
