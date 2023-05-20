#include<bits/stdc++.h>
using namespace std;
void DFS(vector<vector<bool>>&grid,int i,int j,int n,int m)
{
    if(i>=0 and j>=0 and j<m and i<n and grid[i][j])/*base condition*/{
        grid[i][j]=0;//making it zero to avoid the recursion
        //dfs function
        DFS(grid,i+1,j,n,m);
        DFS(grid,i-1,j,n,m);
        DFS(grid,i,j+1,n,m);
        DFS(grid,i,j-1,n,m);
        return;
    }
}
int Gold(vector<vector<bool>>grid)
{
    int c=0;//counting the no of chain
    int n=grid.size(),m=grid[0].size();//initializing the row and columns
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]){
                c++;//adding the no of chains
                DFS(grid,i,j,n,m);//calling the dfs function for seeing no of neighbourings
            }
        }
    }
    return c;

}

int main(){
    int num;//initializing num of relations
    int row;//initializing row
    int column;//initializing column
    cin>>row>>column>>num;//taking the inputs
    vector<vector<bool>> is_gold(row,vector<bool>(column,false));//initializing the 2ed vector
    for(int i=0;i<num;i++){
        int r,c;
        cin>>r>>c;//initializing the row and column
        is_gold[r][c]=true;//if is true
        int n = Gold(is_gold);//no of chains
        cout<<n<<" ";//output

    }
}