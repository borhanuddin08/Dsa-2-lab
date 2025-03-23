#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a[5]= {2,4,6,5,8};
    int n;
    cin>>n;

    int subset[100] = {0};
    subset[0] = 1;
    for(int i = 1;i<100;i++)
    {
        for(int j=0;j<5;j++)
            if(i-a[j]>=0 and subset[i-a[j]])
                subset[i] =1;
//        if(i-2>=0 and subset[i-2]) subset[i]=1;   bad practice
//        if(i-4>=0 and subset[i-4]) subset[i]=1;
//        if(i-6>=0 and subset[i-6]) subset[i]=1;
//        if(i-5>=0 and subset[i-5]) subset[i]=1;
//        if(i-8>=0 and subset[i-8]) subset[i]=1;

    }


    cout<<subset[n]<<endl;





}
