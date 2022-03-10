// power set

#include<bits/stdc++.h>
using namespace std;

vector<string> AllPossibleSubtring(string s){
    sort(s.begin(), s.end());
		    int n = s.length();
		    vector<string> v;
		    
		    double d = pow(2, n)-1;
		    int power = int(d);
		    
		    for(int i=1; i<=power; i++){
		        bitset<32> b(i);
		        string st = b.to_string();
		        reverse(st.begin(), st.end());
		        string st2 = "";
		        for(int j=0; j<n; j++){
		            if(st[j]=='1'){
		                st2+=s[j];
		            }
		        }
		        sort(st2.begin(), st2.end());
		        v.push_back(st2);
		    }
		    sort(v.begin(), v.end());
		    return v;
		    //d dm dmn dmx dmxn dn dx dxn m mn mx mxn n x xn
}

int main(){
    string s; 
    cin>>s;
    auto v = AllPossibleSubtring(s);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}