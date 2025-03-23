#include<bits/stdc++.h>
using namespace std;
int sum(int a[],int i,int j) //i theke j prjtw sum ber kre dbe
{
    if(i==j)return  a[i]; //jokhon akta element thakbe tokhon oitai i er value return kbre
    int mid =(i+j)/2;
    int sum1 = sum(a,i,mid);
    int sum2 = sum(a,mid+1,j);
    return sum1+sum2;
}

int main()
{
    int a[5] = {1,2,3,4,5};
    cout<<sum(a,0,4)<<endl;

}
