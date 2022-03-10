	   int i=0,j = m-1;
        int res = -1;
        while(i<n && j>=0){
            if(arr[i][j]==1){        
                j--;                     
                res = i;
            }
            else i++;       
        }
        return res;
	}
