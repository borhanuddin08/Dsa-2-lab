#include<bits/stdc++.h>

using namespace std;

void recursion(int n)
{
    if(n==0)
        return;

    recursion(n-1); //1 to n-1 prjntw recursion keo akjn recursion kre dbe
    cout<<n<<endl; //pura programme er  print korar kaj ta ei line e krbw
}

int main()
{
    int n;
    cin>>n; //input nicci
    recursion(n);

}
