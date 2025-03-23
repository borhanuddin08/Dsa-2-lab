#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a[7] = {0,2,5,1,7,9,29};
    int k = 4;
    sort(a,a+7); //a er 0 address theke index, er porer address porjonto address er value pass krbw
    reverse(a,a+7);
    int sum = 0;
    for(int i =0; i<k; i++)
        sum+=a[i];
    cout<<sum<<endl;
}
