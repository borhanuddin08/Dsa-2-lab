#include <bits/stdc++.h>
using namespace std;

struct min_max {
    double minVal;
    double maxVal;
};

min_max findMaxMin(double a[], int i, int j) {
    min_max Min_max;

    if (i == j) {
        Min_max.maxVal = a[i];
        Min_max.minVal = a[i];
        return Min_max;
    }

    if (i + 1 == j) {
        Min_max.maxVal = max(a[i], a[j]);
        Min_max.minVal = min(a[i], a[j]);
        return Min_max;
    }

    int mid = (i + j) / 2;

    min_max left = findMaxMin(a, i, mid);
    min_max right = findMaxMin(a, mid + 1, j);

    Min_max.maxVal = max(left.maxVal, right.maxVal);
    Min_max.minVal = min(left.minVal, right.minVal);

    return Min_max;
}

int main() {
    double a[6] = {34,-1.5,5,6,-50.1,-6};
    min_max result = findMaxMin(a, 0, 5);
    printf("Maximum value is: %.1f\n", result.maxVal);
    printf("Minimum value is: %.1f\n", result.minVal);
    return 0;
}
