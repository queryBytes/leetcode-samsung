// Given two strings, how can we find the longest common substring?
// A01.cpp
// DONE

#include<bits/stdc++.h>
using namespace std;

int LCsubstr(string s1, string s2, int n1, int n2)
{
    int LCsuff[n1+1][n2+1];
    int i,j;

    for(i=0; i<=n1; i++){
        LCsuff[i][0]=0;
    }
    for(j=0; j<=n2; j++){
        LCsuff[0][j]=0;
    }


    for(i=1; i<=n1; i++)
    {
        for(j=1; j<=n2; j++)
        {
            if(s1[i-1]==s2[j-1]){
                LCsuff[i][j]=LCsuff[i-1][j-1]+1;
            }
            else{
                LCsuff[i][j]=max(LCsuff[i-1][j], LCsuff[i][j-1]);
            }
        }
    }
    return LCsuff[n1][n2];
    
}

int main()
{
    string s1="chintookumar";
    string s2="roopakchintook";

    int n1,n2, m;
    n1=s1.size();
    n2=s2.size();
    cout<<"Longest common substring: "<< LCsubstr(s1, s2, n1, n2);
    return 0;
}
