
#include<bits/stdc++.h>
using namespace std;
int sum;


int even_sum(int a[],int i,int j)
{
    if(i==j)
    {
        if(a[i]%2==0)
        return a[i];
        return 0;
    }
    int mid = (i+j)/2;
    int left_side = even_sum(a,n,i,mid);
    int right_side = even_sum(a,n,mid+1,j);
    sum = left_side+right_side;

}



int main()
{
    int a[5]= {0,3,4,2,7};
    int total = even_sum(a,0,4);
    printf("sum is :%d",total);
}
