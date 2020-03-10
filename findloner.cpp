long long findLoner(long long arr[],int n)
{
    //Your code here
    unordered_map<long long int, int> freq;
    for(long long int i=0;i<=n;i++)
    {
        freq[arr[i]]++;
    }
    for(auto i:freq)
    {
        if(i.second == 1)
            return i.first;
    }
}


