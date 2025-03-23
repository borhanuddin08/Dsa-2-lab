#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define pb push_back


int par[1000];
int Find(int x)     //find parent of x
{
    if(par[x]==x) return x;
    return par[x]=Find(par[x]);

}

void Union(int a ,int b)
{
    par[Find(a)] = Find(b);
}



int main ()
{


    int n;      //node
    cin>>n;
    int m;
    cin>>m;     //edge

    vector<pii>  v[n+1];

    for(int i=0; i<m; i++)
    {
        int a,b,w;
        cin>>a>>b>>w;
        v.pb({w{a,b});

    }

        sort(v.begin(),v.end());

        int mst=0;
        for(int i=0;i<v.size(),i++)
        {
            pair<int,pii> cur = v[i];
            int a=cur.second.first, b =
        }




}
