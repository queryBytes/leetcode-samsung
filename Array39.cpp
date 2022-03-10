//
// dated 01.04.2021

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int PalinArray(vector<ll> &ar, ll n){
    for(ll i=0; i<n; i++){
        string st = to_string(ar[i]);
        string st2 = st;
        reverse(st.begin(), st.end());  //reverse method doesnot return anything
        if(st!=st2){
            return 0;
        }
    }
    return 1;
}

int main(){
    vector<ll> ar={111, 222, 333, 444, 555};
    ll n = ar.size();

    cout<<PalinArray(ar, n)<<endl;
    return 0;
}
