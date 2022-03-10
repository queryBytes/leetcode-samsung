// edit distance with recursion

#include<bits/stdc++.h>
using namespace std;

int editdistance(string s, string t, int slen, int tlen)
{
    if(slen==0)
        return tlen;
    if(tlen==0)
        return slen;

    if(s[slen]==t[tlen])
        return editdistance(s, t, slen-1, tlen-1);
    else
        return 1+min(min(editdistance(s, t, slen-1, tlen), 
        editdistance(s, t, slen, tlen-1)), editdistance(s, t, slen-1,tlen-1));
}

int main()
{
    string s="geek", t="geek";
    int slen=s.size(), tlen=t.size();

    cout<<editdistance(s, t, slen-1, tlen-1);
    return 0;
}