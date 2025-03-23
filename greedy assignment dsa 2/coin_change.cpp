#include<bits/stdc++.h>

using namespace std;

int Count[100] = {0};

int findMinCoins(int coins[], int size, int value)
{
    int totalCoins = 0;

    for (int i = 0; i < size; i++)
    {
        while (value >= coins[i])
        {
            value -= coins[i];
            Count[i]++;
            totalCoins++;
        }
        if (value == 0)
            break;
    }

    return totalCoins;
}

int main()
{
    int coins[] = {25,10,5,1};
    int value = 173;
    int size = sizeof(coins) / sizeof(coins[0]);

    int MinCount = findMinCoins(coins, size, value);


    for (int i = 0; i < size; i++)
    {
        printf("%d cents ---> %d\n", coins[i], Count[i]);
    }
    printf("\nTotal coins: %d\n", MinCount);

    return 0;
}
