
#include<bits/stdc++.h>

using namespace std;
int Sum =0;

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
     else{
        Sum = n + sum(n-1);
     }


 return Sum;
}

int main()
{
    int n;
    cin>>n;
   sum(n);
   cout<<Sum<<endl;

}
