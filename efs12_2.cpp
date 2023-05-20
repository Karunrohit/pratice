#include <bits/stdc++.h>

using namespace std;

void bfs(vector<vector<int>> &grid,int row,int column){
    vector<vector<int>> vis(row,vector<int> (column,-2));
    queue<tuple<int,int,int>> q;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(grid[i][j]==0){
                q.push(make_tuple(i,j,0));
                vis[i][j]=0;
            }
            if(grid[i][j]==-1)
                vis[i][j]=-1;
        }
    }
    while(!q.empty())
    {
        tuple<int,int,int> t=q.front();
        q.pop();
        int x=get<0>(t);
        int y=get<1>(t);
        int l=get<2>(t);
        if(x+1<row && grid[x+1][y]==-2){
            vis[x+1][y]=l+1;
            grid[x+1][y]=0;
            q.push(make_tuple(x+1,y,l+1));
        }
        if(x-1>=0 and grid[x-1][y]==-2){
            vis[x-1][y]=l+1;
            grid[x-1][y]=0;
            q.push(make_tuple(x-1,y,l+1));
        }
        if(y-1>=0 and grid[x][y-1]==-2){
            vis[x][y-1]=l+1;
            grid[x][y-1]=0;
            q.push(make_tuple(x,y-1,l+1));
        }
        if(y+1<column and grid[x][y+1]==-2){
            vis[x][y+1]=l+1;
            grid[x][y+1]=0;
            q.push(make_tuple(x,y+1,l+1));
        }
    }
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            grid[i][j]=vis[i][j];
        }
    }
}
int main(){
    int row,column;
    cin>>row>>column;
    vector<vector<int>> grid(row,vector<int>(column,0));
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            int temp;
            cin>>temp;
            grid[i][j]=temp;
        }
    }
    bfs(grid,row,column);
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
           cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
}