#include<bits/stdc++.h>
using namespace std;
void generatesubset(int arr[],int n,int i,vector<int> v)
{
    if(i==n)
    {
        for(int i : v)
            cout<<i<<' ';
        cout<<endl;
        return;
    }


    //(second way)  v.push_back(arr[i]);

    generatesubset(arr,2,i+1,v);
    v.push_back(arr[i]);

    // (second way) v.pop_back();

    generatesubset(arr,2,i+1,v);

}


int main ()
{
    int arr[] = {1,2};
    vector<int> v; //result store rakhbo ei vector e
    generatesubset(arr,2,0,v);
}
