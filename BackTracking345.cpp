// Rat in maze problem 1 not blocked, 0 blocked
#include<bits/stdc++.h>
using namespace std;

int boundaryProblem(int i, int j, int n){
    return 0<=i && i<n && 0<=j && j<=n;
}

int result=0;

void ratMaze(vector<vector<int>> &v,int n, int i, int j, vector<vector<int>> &visited){

    if(v[n-1][n-1]==1) return;

    if(i==n-1 && j==n-1){
        result++;
        return;
    }

    if(!boundaryProblem(i, j, n)){
        return;
    }

    visited[i][j]=1;
    if(boundaryProblem(i, j-1, n) && v[i][j-1]==0 && visited[i][j-1]==0){
        ratMaze(v, n, i, j-1,visited);
    }
    if(boundaryProblem(i, j+1, n) && v[i][j+1]==0 && visited[i][j+1]==0){
        ratMaze(v, n, i, j+1,visited);
    }
    if(boundaryProblem(i-1, j, n) && v[i-1][j]==0 && visited[i-1][j]==0){
        ratMaze(v, n, i-1, j,visited);
    }
    if(boundaryProblem(i+1, j, n) && v[i+1][j]==0 && visited[i+1][j]==0){
        ratMaze(v, n, i+1, j,visited);
    }
    
    visited[i][j]=0;
}


int main(){
    int n, i, j;
    cin>>n;
    vector<vector<int>> v(n, vector<int>(n, 0));
    vector<vector<int>> visited(n, vector<int>(n, 0));
    
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cin>>v[i][j];
        }
    }

    ratMaze(v, n, 0, 0, visited);
    cout<<result;

}