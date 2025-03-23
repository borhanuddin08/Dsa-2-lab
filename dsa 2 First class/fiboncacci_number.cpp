#include<bits/stdc++.h>

using namespace std;

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
        return 1;

    return sum(n-1)+sum(n-2);

}

int main()
{
    int n;
    cin>>n;
   sum(n);
   cout<<sum(n)<<endl;

}
