long long numberUtil(int coins[], int nCoins, int value, int dp[][1000])
{
     if(dp[nCoins][value] == -1)
    {
      if(nCoins == 0)
        dp[nCoins][value] = 0;
      if(value == 0)
        dp[nCoins][value] = 1;
        
      int res = numberUtil(coins, nCoins-1, value, dp);
      if(coins[nCoins-1]<=value)
        res+=numberUtil(coins, nCoins, value-coins[nCoins-1], dp);
      dp[nCoins][value] = res;
    }
    return dp[nCoins][value];
}

long long numberOfWays(int coins[],int nCoins,int value)
{
    // if(nCoins == 0)
    //     return 0;
    // if(value == 0)
    //     return 1;
    
    // int res = numberOfWays(coins, nCoins-1, value);
    // if(coins[nCoins-1]<=value)
    //     res+=numberOfWays(coins, nCoins, value-coins[nCoins-1]);
        
    // return res;
    
    int dp[1000][1000];
    memset(dp, -1, sizeof(dp));
    return numberUtil(coins, nCoins, value, dp);
}
