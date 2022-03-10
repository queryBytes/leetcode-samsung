#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll MaxSumArray(vector<ll> v, ll n)
{
    ll sum=0;
    ll mx=INT_MIN;

    for(ll i=0; i<n; i++)
    {
        if(sum<0)
        {
            sum=0;
        }
        sum=sum+v[i];
        mx=max(mx, sum);
    }    

    return mx;
}

int main()
{
    ll n, input, i;
    vector<ll> v;
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>input;
        v.push_back(input);
    }

    cout<<MaxSumArray(v, n);
}