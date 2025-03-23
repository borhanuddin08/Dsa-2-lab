#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define pb push_back

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
        v[a].push_back({b,w});
        v[b].pb({a,w});

    }

    int dis[n+1];   //distance from node 1
    for(int i=0; i<=n; i++)
        dis[i] = INT_MAX;

    dis[1] = 0;

    priority_queue<pii> pq;
    pq.push({0,1});

    while(!pq.empty())
    {
        pii small = pq.top();
        pq.pop();
        int distance = small.first;
        int node = small.second;

        for(int i=0; i<v[node].size(); i++)
        {
            int nextNode= v[node][i].first;
            int nextWeight= v[node][i].second;

            if(dis[node]+nextWeight < dis[nextNode])
                dis[nextNode] = dis[node]+nextWeight;
            pq.push({-dis[nextNode],nextNode});
        }
    }

    for(int i=1; i<=6; i++) cout<<dis[i]<<' ';
    cout<<endl;





}
