        int i, n=str1.size(), m=str2.size();
        if(n!=m)
            return false;
        int arr1[26]={0}, arr2[26]={0};
        
        for(i=0; i<n; i++)
        {
            arr1[str1[i]-'a']++;
        }
        
        for(i=0; i<m; i++)
        {
           arr2[str2[i]-'a']++; 
        }
        
        
        for(i=0; i<n; i++)
        {
            if(arr1[str1[i]-'a']!=arr2[str2[i]-'a'])
                return false;
        }
        
        return true;
    }