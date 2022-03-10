// find majority element

#include<bits/stdc++.h>
using namespace std;

int majority(int arr[], int n)
{
    int b=n/2;
    map<int, int>m;
    for(int i=0; i<n; i++)
    {
        ++m[arr[i]];
    }

    for(auto it = m.begin(); it!=m.end(); it++)
    {
        if(it->second>b)
            return it->first;
    }
    return -1;
}

int main()
{
    int n=5;
    int arr[5]={3,1,3,3,2};
    cout<<majority(arr, n);

    return 0;

}