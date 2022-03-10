// find the missing and repeating element in array

#include<bits/stdc++.h>
using namespace std;


int *repeating_missing(int arr[], int n)
{
    
    int *ans = new int[2];
    int i;

    for(i=0; i<n; i++)
    {   
        if(arr[abs(arr[i])-1]>0)
        {
            arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
        }
        else{
            
            ans[0]=abs(arr[i]);//repeating number
        }
    }

    for(i=0; i<n; i++)
    {
        if(arr[i]>0)
            ans[1]=i+1;
    }

    return ans;
}

int main()
{
    std::ios::sync_with_stdio(false);
    int arr[2]={2, 2};

    auto ans = repeating_missing(arr, 2);
    cout<<ans[0]<<endl;
    cout<<ans[1]<<endl;
}