// given string is part of the string or not
// brute force method
// DONE

#include<iostream>

using namespace std;

int bruteforce(string T, string S, int n, int m)
{
    int i,j, count;
    for(i=0; i<n-m+1; i++)
    {
        j=0, count=0;
        while(j<m)
        {
            if(T[j+i]==S[j])
            {
                count++;
            }
            j++;
        }
        if(count==m)
        {
            return i;
        }

    }

    return -1;
}

int main()
{
    string T,S;
    T="chintookumar";
    S="hintooodfgdfg";
    int n,m;
    n=T.size();
    m=S.size(); 

    int I=bruteforce(T, S, n, m);
    cout<<"Index of the matching string: "<<I;
    return 0;
}