//Split the binary string into substrings with equal number of 0s and 1s
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="0100110101";
    int res=0, count_0=0, count_1=0, i, n=s.size();

    for(i=0; i<n; i++)
    {
        if(s[i]=='0')
            count_0++;
        if(s[i]=='1')
            count_1++;
        
        if(count_0==count_1)
        {
            res++;
        }
    }

    cout<<res;
}