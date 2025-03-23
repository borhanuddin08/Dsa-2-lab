#include<bits/stdc++.h>
using namespace std;


void print_odd(int a[],int n,int i,int j)
{
    if(i==j)
    {
        if(a[i]%2) cout<<a[i]<<' ';
        return;
    }
    int mid = (i+j)/2;
    print_odd(a,n,i,mid);
    print_odd(a,n,mid+1,j);
}



int main()
{
    int a[5]={0,3,4,2,7};
    print_odd(a,5,0,4);
}
