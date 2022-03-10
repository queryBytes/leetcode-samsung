// 486 Dynamic programming edit distace

#include<bits/stdc++.h>
using namespace std;

int editDistace(string s1, string s2, int m, int n)
{
    if(n==0)
        return m;
    if(m==0)
        return n;
    
    if(s1[m-1]==s2[n-1]){
        return editDistace(s1, s2, m-1, n-1);
    }
    else{
        return 1+min(min(editDistace(s1, s2, m,n-1), editDistace(s1, s2, m-1, n)), editDistace(s1, s2, m-1, n-1));
    }
}

int main()
{
    string s1="chintoo";
    string s2="kumar";
    int m=s1.size();
    int n=s2.size();

    cout<<editDistace(s1, s2, m, n);

    return 0;
}