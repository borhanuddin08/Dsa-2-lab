#include<bits/stdc++.h>
using namespace std;

int main()
{
    int M, T, N;
    cin >> M >> T >> N;
    int m[N], t[N];
    for (int i = 0; i < N; i++) {
        cin >> m[i] >> t[i];
    }
    double mpm[N];
    for (int i = 0; i < N; i++) {
        mpm[i] = (double)m[i] / t[i];
    }
    double ans = 0.0;
    while (T > 0) {
        double mx = 0.0;
        int mxind = -1;
        for (int i = 0; i < N; i++) {
            if (mpm[i] > mx) {
                mx = mpm[i];
                mxind = i;
            }
        }
        if (T >= t[mxind]) {
            ans += m[mxind];
            T -= t[mxind];
        } else {
            ans += mpm[mxind] * T;
            T = 0;
        }
        mpm[mxind] = 0;
    }
    cout << "Maximum marks you can get: " << ans << endl;
    return 0;
}
