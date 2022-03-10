//  using memoization 
//  calculating fibonacci series
//  author: Chintoo Kumar
//  Date 18.04.2021
//  Done!
#include<bits/stdc++.h>
using namespace std;
#define NIL -1
#define MAX 100

int lookup[MAX]={0};

int fibonacci(int n){
    if(lookup[n]==0){
        if(n<=1){
            lookup[n]=n;
        }
        else{
            lookup[n]=fibonacci(n-1) + fibonacci(n-2);
        }
    }
    return lookup[n];
}

int main(){
    int n;
    cout<<"N:";
    cin>>n;

    cout<<fibonacci(n);
}