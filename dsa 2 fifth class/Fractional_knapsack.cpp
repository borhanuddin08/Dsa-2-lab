#include<bits/stdc++.h>
using namespace std;

int main()
{
    int bagW,n;
    cin>>n;
    int w[n],v[n];
    for(int i=0; i<n; i++) cin>>w[i]>>v[i];
    cin>>bagW;
    int puv[n];
    for(int i=0; i<n; i++) puv[i]=v[i]/w[i];
    int ans=0;
    while(bagW)
    {
        int mx=0,mxind=-1;
        for(int i=0; i<n; i++)
        {
            if(mx<puv[i])
            {
                mx=puv[i];
                mxind=i;
            }
        }
        if(bagW>=w[mxind])
        {
            ans+=v[mxind];
            bagW-=w[mxind];
        }
        else                  //bagW<w[mxindx]
        {
            ans+=puv[mxind]*bagW;
            bagW=0;

        }
        puv[mxind]=0;


    }
    cout<<ans<<endl;


}
