// Count set bits in integer
// DOne!
#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter integer: ";
    int n;
    cin>>n;
    bitset<32> b(n);
    int a =b.count();
    cout<<"number of set bits: "<<a;
}