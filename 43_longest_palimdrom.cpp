#include<bits/stdc++.h>
#define ll long long
using namespace std;

int longestpalim(string s)
{
    int n=s.size();
    int arr[n][n], i, j;

    for(i=0; i<n; i++)
    {
        arr[i][i]=1;
    }

    for(i=0, j=1; i<n, j<n; i++, j++)
    {
        if(s[i]==s[j])
            arr[i][j]=1;
        else
            arr[i][j]=0;
    }

    for(i=2; i<n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            if(s[i]==s[j])
                arr[i][j]=arr[i+1][j-1]+2;
            else
                arr[i][j]=max(arr[i-1][j], arr[i][j-1]);
        }
    }

    return arr[0][n-1];
}




int main()
{
    string s="chintookumar";
    cout<<longestpalim(s);

    return 0;

}