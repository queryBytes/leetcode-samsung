// minimum number of jump require to move end of the array

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int i, j, k, n, temp, mx=0;
    n=sizeof(arr)/sizeof(arr[0]);

    for(i=0; i<n; i++){
        j = arr[i];
        for(k=0; k<i+j; k++){
            mx = max(mx,arr[i+k]-k);
        }
    }
    cout<<mx;
}