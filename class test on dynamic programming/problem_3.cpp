
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    //  base case condition
    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }
    if (n == 2)
    {
        cout << "2" << endl;
        return 0;
    }

    int dp[n + 1][3];
    dp[1][1] = 1;
    dp[1][2] = 0;
    dp[2][1] = 1;
    dp[2][2] = 1;


    for (int i = 3; i <= n; i++)
    {
        dp[i][1] = dp[i - 1][1] + dp[i - 1][2];
        dp[i][2] = dp[i - 2][1];
    }


    cout << dp[n][1] + dp[n][2] << endl;

    return 0;
}
