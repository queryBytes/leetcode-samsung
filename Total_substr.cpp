// total substr in string

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "chintoo";
    int i, j, n=s.size();
    string str;

    for(i=0; i<=n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            str = s.substr(j, i+1);
            cout<<str<<" ";
        }
    }

}