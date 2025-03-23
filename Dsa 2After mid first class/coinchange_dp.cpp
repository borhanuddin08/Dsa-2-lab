#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
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
        int mn=INT_MAX;
        for(j=;j<5;j++)
        {
            if(i-m)
        }

    }
    cout<<dp[n]<<endl;
}
