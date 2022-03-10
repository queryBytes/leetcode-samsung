#define ll long long
#include<bits/stdc++.h>
using namespace std;


vector<ll> next_greater(vector<ll> v, int n)
{
    vector<ll> vv(n, 0);
    stack<int> st;
    int i=0;

    while(i<n)
    {
        if(!st.empty() && v[i]>v[st.top()])
        {
            vv[st.top()]=v[i];
            st.pop();
        }
        else
        {
            st.push(i);
            i++;
        }
    }

    for(int i=0; i<n; i++)
    {
        if(vv[i]==0)
            vv[i]=-1;
    }
    return vv;
}

int main()
{
    vector<ll> v{1, 3, 2, 4};
    int n=4;
    
    vector<ll> vv;
    vv=next_greater(v, n);
    for(int i=0; i<n; i++)
    {
        cout<<vv[i]<<" ";
    }

    return 0;
}