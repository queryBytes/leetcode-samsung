// find position of only set bit

#include<bits/stdc++.h>
using namespace std;

int findPosition(int N) {
        // code here
        bitset<32>b(N);
        string st = b.to_string();
        int count=b.count();
        if(count==1){
            for(int i=31; i>=0; i--){
                if(st[i]=='1'){
                    return 32-i;
                }
            }
        }
        else{
            return -1;
        }
    }

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<findPosition(n);
}