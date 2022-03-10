// program to find whether a number is power of 2
// log(), log2(), log10()

#include<bits/stdc++.h>
using namespace std;

bool powerOfTwo(int n){
    bitset<32> b(n);
    if(b.count()==1){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<powerOfTwo(n);    // will print 1 or 0
}