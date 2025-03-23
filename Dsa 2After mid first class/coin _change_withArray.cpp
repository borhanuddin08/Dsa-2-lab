#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int mn;
    int dp[n+1];
    for(int i =0; i<=n;i++)
    {
        dp[i] = INT_MAX;

    }
    dp[0] = 0;
    dp[1] = 1;
    int coins[5] = {1,2,5,6,10};
     for(int i = 2; i<=n; i++)
    {
        int mn=LLONG_MAX;
    }

    for (int i = 2; i <= n; i++) { // Compute dp values for all amounts
        for (int j = 0; j < 5; j++) { // Iterate through the coin denominations
            if (i - coins[j] >= 0 && dp[i - coins[j]] != LLONG_MAX) {
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
        dp[i]=mn;

    }
    cout<<dp[n]<<endl;
}
