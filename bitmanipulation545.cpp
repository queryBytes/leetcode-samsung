// count total set bits in all numbers from 1 to n

#include<bits/stdc++.h>
using namespace std;

int totalCount(int n){
    int count=0;
    while(n>0){
        bitset<32> b(n);
        count +=b.count();
        n--;
    }
    return count;
}

int main(){
    int n; 
    cout<<"Enter value of N: ";
    cin>>n;
    cout<<totalCount(n);
}