// Median of 2 sorted vrays of equal size
// dated 01.04.2021

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={90, 100, 78, 89, 67};
    int n = v.size();
    sort(v.begin(), v.end());

    if(n%2==1){
        cout<<v[n/2]<<endl;
    }
    else{
        cout<<(v[n/2-1]+v[n/2])/2<<endl;
    }
}
