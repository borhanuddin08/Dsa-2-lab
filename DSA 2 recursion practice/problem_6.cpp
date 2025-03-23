#include <bits/stdc++.h>
using namespace std;

void sum(int arr[], int n, int i, int cur, int trg, vector<int> v)
{
    if (cur > trg || i >= n)
        return;

    if (trg == cur)
    {
        for (int i : v)
            cout << i << ' ';
        cout << endl;
        return;
    }
    sum(arr, n, i + 1, cur, trg, v);
    v.push_back(arr[i]);
    sum(arr, n, i, cur + arr[i], trg, v);
}
int main()

{
    int arr[] = {2, 3, 6, 7};
    vector<int> v;
    int trg = 0;
    cin >> trg;
    sum(arr, 4, 0, 0, trg, v);
}
