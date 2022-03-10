#include<bits/stdc++.h>
using namespace std;

bool valid(string x)
{
    int i, n=x.size();
    stack<char> st;
    for(i=0; i<n; i++)
    {
        if(!st.empty() && st.top()==x[i])
        {
            st.pop();
        }
        else
        {
                if(x[i]=='{')
                {
                    st.push('}');
                }
                else if(x[i]=='(')
                {
                    st.push(')');
                }
                else if(x[i]=='[')
                {
                    st.push(']');
                }
                else
                {
                    st.push(x[i]);
                }
        }
    }

    if(st.empty())
        return true;
    return false;
}

int main()
{
    
    string x="([])()[]{]}";
    cout<<valid(x);
    return 0;
}