
// bitset count is used to count the number of set bits in given integer.
//bitset<n> here n represent number of bits you want to count set bit
#include<bits/stdc++.h>
using namespace std;

int main()
{   
    //counting the set bits
    bitset<32> b3(string("10101")); 
    bitset<64> b(16);
    bitset<32> b2(18);
    cout<<b.count()<<endl;
    cout<<b2.count()<<endl;
    cout<<b3.count()<<endl;


    // decimal to binary conversion
    string bnry = bitset<8> (128).to_string();
    cout<<bnry<<endl;

    // binary to string conversion
    unsigned long dec = bitset<7>(bnry).to_ulong();
    cout<<dec<<endl;
// bitset count is used to count the number of set bits in given integer.
//bitset<n> here n represent number of bits you want to count set bit
}

    