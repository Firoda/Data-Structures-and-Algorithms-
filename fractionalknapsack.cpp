#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;

struct Item
{
    int weight;
    int value;
};
bool cmp(struct Item a, struct Item b)
{
    double r1 = (double)a.value/a.weight;
    double r2 = (double)a.value/a.weight;
    return r1>r2;
}

double FKnap(int W, struct Item arr[], int n)
{
    sort(arr, arr+n, cmp);
    int res = 0;
    double value = 0.0;
    for(int i=0;i<n;i++)
    {
        if(res+arr[i].weight <= W)
        {
            res+=arr[i].weight;
            value+=arr[i].value;
        }
        else
        {
            int remain = W-res;
            value+=arr[i].value*((double)remain/arr[i].weight);
            break;
        }
    }
    return value;
}


int main()
 {
	//code
	int test;
	cin >> test;
	while(test--)
	{
	    int n,w;
	    cin >> n >> w;
	    int val, weight;
	    struct Item arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> arr[i].value;
	        cin >> arr[i].weight;
	    }
	    cout <<fixed<<setprecision(2)<<FKnap(w, arr, n)<<endl;
	   //for(int i=0;i<n;i++)
	   //{
	   //    cout << arr[i].value<<endl;
	   //    cout << arr[i].weight<<endl;
	   //}
	}
	return 0;
}
