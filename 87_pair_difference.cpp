// find pair given difference

#include<bits/stdc++.h>
using namespace std;

int numberpair(int arr[], int n, int k)
{
    sort(arr, arr+n);   //nlog(n)

    
    int l=0, r=n-1, ans=0;
    while(r>l)
    {
        if(arr[r]-arr[l]==k)
        {
            ans++;
            l++;
            
        }
        else if(arr[r]-arr[l]>78)
        {
            r--;
        }
        else
        {
            l++;
        }
    }

    if(ans==0)
        return -1;
    return 1;
    
}

int main()
{
    int n=6, k=1;
    int arr[]={1, 2,  3, 4, 5};

    cout<<numberpair(arr, n, k);
    return 0;
}