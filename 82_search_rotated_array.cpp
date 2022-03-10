// search in rotated array

#include<bits/stdc++.h>
using namespace std;

int search_rotated_array(vector<int>& v, int target)
{
    int l=0, r=v.size()-1, i, mid;

    while(l<=r)
    {
        mid=(r+l)/2;
        if(target==v[mid])
            return mid;
        else if(v[l]<=v[mid]) //left sorted
        {
            if(target>=v[l] && target<v[mid])
                r=mid-1;
            else
                l=mid+1;
        }
        else //right sorted
        {
            if(target>v[mid] && target<=v[r])
                l=mid+1;
            else
                r=mid-1;
        }
    }

    return mid;

}

int main()
{
    vector<int> v={5, 6, 7,8,9, 0, 1, 2,3, 4};
    //vector<int> v={1, 2, 3, 4, 5};
    int target=7;

    cout<<search_rotated_array(v, target);

    return 0;
}