// count number of bits to convert A to B
// type casting to int require 

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int needBits(int a, int b){
    int c=a^b;
    bitset<32> bit(c);
    cout<<"Number of bit required to flip: ";

    //int rtn = abs(int(bit1.count())-int(bit2.count()));
    return bit.count();
}

int main(){
    cout<<"Enter A and B: ";
    int a=3, b=4;
    //cin>>a>>b;
    cout<<needBits(a, b);
   
}