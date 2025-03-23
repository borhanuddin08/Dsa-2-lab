
#include <bits/stdc++.h>
using namespace std;

int findMax(int a[], int i, int j)
{
    if (i == j) return a[i];

    int mid = (i + j) / 2;
    int max1 = findMax(a, i, mid);
    int max2 = findMax(a, mid + 1, j);

    if (max1 > max2)
        return max1;
    else
        return max2;
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    cout << "Maximum value: " << findMax(a, 0, 4) << endl;
    return 0;
}
