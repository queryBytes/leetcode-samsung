// Edit Distance using dynamic programming

#include<bits/stdc++.h>
using namespace std;

EditDistance_DP(string s1, string s2)
{
    int i, j, m, n;
    m = s1.size();
    n = s2.size();

    if(m==0)
        return n;
    if(n==0)
        return m;

    int arr[m+1][n+1];
    for(i=0; i<=m; i++)
    {
        for(j=0; j<=n; j++)
        {
            if(i==0)
                arr[i][j]=j;
            else if(j==0)
                arr[i][j]=i; 
            else if(s1[i-1]==s2[j-1])
                arr[i][j]=arr[i-1][j-1];
            else
            {
                arr[i][j]=1+min(min(arr[i][j-1], arr[i-1][j]), arr[i-1][j-1]);
            }
        }
    }

    return arr[m][n];

}

int main()
{
    string s1="geek";
    string s2="gesek";

    cout<<EditDistance_DP(s1, s2);
    return 0;
}