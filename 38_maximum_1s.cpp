class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
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

};
