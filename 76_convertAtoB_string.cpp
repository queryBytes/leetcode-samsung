        int i,j, n=A.size(), m=B.size();
        
        if(n!=m)
            return -1;
        map<char,int> m1, m2;
        for(i=0; i<n; i++)
        {
            m1[A[i]]++;
            
        }
        
        for(j=0; j<m; j++)
        {
            m2[B[j]]++;
        }
        
        for(i=0; i<n; i++)
        {
            if(m1[A[i]]!=m2[A[i]])
                return -1;
        }
        
    int res = 0;
    for (int i=n-1, j=n-1; i>=0; )
    {

        while (i>=0 && A[i] != B[j])
        {
            i--;
            res++;
        }
 
        if (i >= 0)
        {
            i--;
            j--;
        }
    }
    return res;
    }