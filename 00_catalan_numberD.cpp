// catalan number dynamic programming

#include<bits/stdc++.h>
using namespace std;

int catalan(int n)
{
    int i, j, ans=0, arr[n+1]={};
    arr[0]=arr[1]=1;


    for(i=2; i<=n; i++)
    {
        for(j=0; j<i; j++)
        {
        arr[i]+=arr[j]*arr[i-j-1];
        }
    }

    return arr[n];
}

int main()
{
    int i;
    for(i=0; i<10; i++)
    {
        cout<<catalan(i)<<" ";
    }

    return 0;
}