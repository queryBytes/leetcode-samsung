// find all pairs on integer array whose sum is equal to given number

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1, 1, 1, 1};
    int n=sizeof(arr)/sizeof(arr[0]), i, size=2;
    map<int, int> m;

    for(i=0; i<n; i++){
        m[arr[i]]++;
    }

    int count=0;
    for(i=0; i<n; i++){
        count +=m[size-arr[i]];

        if(size - arr[i]==arr[i]){
            count--;
        }
    }

    cout<<count/2;
}