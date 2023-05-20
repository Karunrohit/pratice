#include <bits/stdc++.h>

using namespace std;
class dfs
{
public:
    //Function to find whether a path exists from the source to destination.
    bool istrue=0;
    void solve(vector<vector<int>>& grid, int i, int j,int r,int c,vector<vector<bool>> &vis){
        if(i>=r or j>=c or i<0 or j<0 or vis[i][j]  or grid[i][j]==0){
            return ;
        }
        if(grid[i][j]==2){
            istrue=1;
        }
        vis[i][j]=1;
        solve(grid,i+1,j,r,c,vis);
        solve(grid,i-1,j,r,c,vis);
        solve(grid,i,j-1,r,c,vis);
        solve(grid,i,j+1,r,c,vis);
        return ;
    }
    bool is_Possible(vector<vector<int>>& grid)
    {
        vector<vector<bool>> vis(grid.size(),vector<bool>(grid[0].size(),0));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    solve(grid,i,j,grid.size(),grid[0].size(),vis);
                }
            }
        }
        return istrue;
        //code here
    }
};
int main(){
    int num;
    cin>>num;
    vector<vector<int>> ans(num,vector<int>(num,0));
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            int temp;
            cin>>temp;
            ans[i][j]=temp;
        }
    }

    dfs d;
    cout<<d.is_Possible(ans);
}
