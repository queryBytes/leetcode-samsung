// catalan number recursive

#include<bits/stdc++.h>
using namespace std;

int catalan(int n)
{
    int ans=0, i;

    if(n<=1)
    {
        return 1;
    }
    else{
        for(i=0; i<n; i++)
        ans+=catalan(i)*catalan(n-i-1);
    }

    return ans;
}

int main()
{
    //int n=5;
    int i;

    for(i=0; i<10; i++)
    {
        cout<<catalan(i)<<" ";
    }

    return 0;

}