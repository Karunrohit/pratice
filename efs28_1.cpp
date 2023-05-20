#include<bits/stdc++.h>
using namespace std;
int m,n;
vector<vector<int>> isstablized(vector<vector<int>>&grid){
    bool boolean=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n-2;j++){
            if((abs(grid[i][j])==abs(grid[i][j+1])) && (abs(grid[i][j+1])==abs(grid[i][j+2])) && (abs(grid[i][j+2])!=0)){
                grid[i][j]=-abs(grid[i][j]);
                grid[i][j+1]=-abs(grid[i][j]);
                grid[i][j+2]=-abs(grid[i][j]);
                boolean=1;
            }
        }
    }
    for(int i=0;i<m-2;i++){
        for(int j=0;j<n;j++){
            if((abs(grid[i][j])==abs(grid[i+1][j])) && (abs(grid[i+1][j])==abs(grid[i+2][j])) && (abs(grid[i+2][j])!=0)){
                grid[i][j]=-abs(grid[i][j]);
                grid[i+1][j]=-abs(grid[i][j]);
                grid[i+2][j]=-abs(grid[i][j]);
                boolean=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        int s=m-1;
        for(int j=m-1;j>=0;j--){
            if(grid[j][i]>0){
                grid[s][i]=grid[j][i];
                s-=1;
            }
        }
        for(int k=0;k<s+1;k++){
            grid[k][i]=0;
        }
    }
    
    if(boolean)
        return isstablized(grid);
    else
        return grid;

}
void input(vector<vector<int>>& grid){
    cin>>m>>n;
    for(int i=0;i<m;i++){
        vector<int> v1;
        for(int j=0;j<n;j++){
            int t;
            cin>>t;
            v1.push_back(t);
        }
        grid.push_back(v1);
    }
    }
int main(){
    vector<vector<int>> grid;
    input(grid);
    vector<vector<int>> ans=isstablized(grid);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}