#include<bits/stdc++.h>
using namespace std;

int main()
{

int n;
cin>> n;
int dp[n] [3];
dp[1][1] =1;
dp[1][2] =0;

dp[2] [1] =1;
dp[2] [2] =1;

for(int i=3;i<n;i++)

{
    dp[i][1] = dp[i-1][1] + dp[i-2][2];
    dp[i][2] = dp[i-2][1];

}

cout<<dp[n-1][1]+[dp[n-1][2]<<endl;

}
