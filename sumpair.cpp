int binary(int arr[], int x, int l, int r)
{
    while(l<=r)
    {
        int m = l+(r-1)/2;
        if(arr[m] == x)
            return m;
        if(arr[m]<x)
            l = m+1;
        else
            r = m-1;
    }
    return -1;
}
void findPairs(int arr[], int n, int sum){
        // Your code here
        
        int i=0,flag = 0;
        while(arr[i]<sum && i<=n)
        {
            int a = arr[i];
            int diff = sum - a;
            int pos = binary(arr, diff, 0 , n);
            if(pos != -1)
            {
                if(pos != i)
                {
                    cout << a <<" "<< diff <<" "<< sum << endl;
                    flag = 1;
                }
            }
            i++;
        }
        if(flag == 0)
            cout << -1 << endl;
}

