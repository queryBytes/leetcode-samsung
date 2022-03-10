//  coin change problem
//  Date: 18.04.2021

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll count(ll arr[], ll m, ll n){
    if(n<0){
        m=m-1;
        return 0;
    }
    if(n==0){
        m=m-1;
        return 1;
    }
    
    ll result = count(arr, m, n-arr[m-1]) + count(arr, m, n);

    return result;
    
}

int main(){
    ll n, m;
    cout<<"n: "<<"m: ";
    cin>>n>>m;
    ll arr[m];
    for(ll i=0; i<m; i++){
        cin>>arr[i];
    }
    ll total = count(arr, m, n);
    cout<<total;
}
