// merge two sorted array without using extraspace

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v1, v2, v3;
    int m, n, i, i1=0, i2=0,j;
    v1={10, 12};
    v2={5, 18, 20};

    m=v1.size();
    n=v2.size();
    for(i=0; i<m+n; i++){

    if(i1<m && i2<n){
        if(v1[i1]<=v2[i2]){
            v3.push_back(v1[i1]);
            ++i1;
        }
        else{
            v3.push_back(v2[i2]);
            ++i2;
        }
    }
    else if(i1<m){
        v3.push_back(v1[i1]);
        ++i1;
    }
    else if(i2<n){
        v3.push_back(v2[i2]);
        ++i2;
    }
    }
    for(i=0; i<n+m; i++){
        cout<<v3[i]<<" ";
    }

}