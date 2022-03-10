        // code here
        //std::ios::sync_with_stdio(false);
        //cin.tie(true);
        sort(arr, arr+n);
        int mn, mx;
        int ans=arr[n-1]-arr[0];
        int s=arr[0]+k, l=arr[n-1]-k;
        for(int i=0; i<n-1; i++)
        {
            mn=min(arr[i+1]-k, s);
            mx=max(arr[i]+k, l);
            if(mn<0)
                continue;
            ans=min(ans, mx-mn);
        }
        
        return ans;