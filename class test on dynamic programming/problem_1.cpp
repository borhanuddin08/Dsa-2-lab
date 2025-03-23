
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, W;
    cin >> N >> W;
    vector<int> profit(N), weight(N);

    for (int i = 0; i < N; i++) cin >> profit[i];
    for (int i = 0; i < N; i++) cin >> weight[i];

    vector<vector<int>> dp(N + 1, vector<int>(W + 1, 0));

    for (int i = 1; i <= N; i++)
    {
        for (int w = 0; w <= W; w++)
        {
            if (weight[i - 1] <= w)
            {
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - weight[i - 1]] + profit[i - 1]);
            }
            else
            {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    cout << "Maximum Profit: " << dp[N][W] << endl;

    int w = W;
    vector<int> items;
    for (int i = N; i > 0; i--)
    {
        if (dp[i][w] != dp[i - 1][w])
        {
            items.push_back(i);
            w -= weight[i - 1];
        }
    }

    cout << "Items selected (1-based index): ";
    for (int i = items.size() - 1; i >= 0; i--) cout << items[i] << " ";
    cout << endl;

    return 0;
}
