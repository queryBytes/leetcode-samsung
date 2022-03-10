// find the kth max and min element in the array

#include<bits/stdc++.h>
using namespace std;

int KthMax(vector<int> v, int n)
{
    map<int, int> m;
    for(int i=0; i<n; i++)
    {
        ++m[v[i]];
    }

    for(auto it = m.begin(); it!=m.end(); it++)
    {
        if(it->second>1)
        {
            return it->first;
        }
    }
    return 0;
}

int main()
{
    int n, input;
    vector<int> v;
    cin>>n;
    for(int i=0; i<n; i++)
    {   
        cin>>input;
        v.push_back(input);
    }
    cout<<KthMax(v, n);

    return 0;
}