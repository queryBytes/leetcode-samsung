// edit distance dynamic programming

#include<bits/stdc++.h>
using namespace std;

void editdistance(string s, string t, int slen, int tlen)
{
    int arr[slen+1][tlen+1], i, j;

    for(i=0; i<=slen; i++)
    {
        for(j=0; j<=tlen; j++)
        {
            if(i==0)
                arr[i][j]=j;
            else if(j==0)
                arr[i][j]=i;
            else if(s[i-1]==t[j-1])
                arr[i][j]=arr[i-1][j-1];
            else
                arr[i][j]=1+min(min(arr[i][j-1], arr[i-1][j]), arr[i-1][j-1]);
            
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<arr[slen][tlen];


}

int main()
{
    string s="geek", t="chintoogeek";
    int slen=s.size(), tlen=t.size();

    editdistance(s, t, slen, tlen);
    return 0;
}