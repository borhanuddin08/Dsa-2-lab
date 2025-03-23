#include<bits/stdc++.h>
using namespace std;

int power_function(int n,int y)
{
    if (y==0)
    {
        return 1;
    }
    int value =power_function(n,y/2);
    if(y%2==0)
        return value*value;
    return value*value*n;
}
int main ()
{
    int something = power_function(3,5);
    printf("power value is :%d",something);
}
