int dp[x+1][y+1];
    memset(dp, 0, sizeof(dp));
    // for(int i=0;i<=x;i++)
    //     dp[i][0] = 0;
    // for(int j=0;j<=y;j++)
    //     dp[0][j] = 0;
    for(int i=0;i<=x;i++)
    {
        for(int j=0;j<=y;j++)
        {
            if(i == 0 || j == 0)
                dp[i][j] = 0;
            else if(s1[i] == s2[j])
            {
                dp[i][j] = 1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    
    return dp[x][y];
    
