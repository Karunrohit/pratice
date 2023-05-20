#include <bits/stdc++.h>

using namespace std;


class bt{
public:
    vector<string> ans;
    void solve(vector<vector<int>> &m, int n,string temp,int i,int j,vector<vector<bool>> vis){
        if(i<0 or j<0 or i==n or j==n or m[i][j]!=1 or vis[i][j]==1){
            return;
        }
        vis[i][j]=1;
        if(i==n-1 and j==n-1){
            ans.push_back(temp);
        }

            solve(m,n,temp+"R",i,j+1,vis);
            solve(m,n,temp+"D",i+1,j,vis);
            solve(m,n,temp+"L",i,j-1,vis);
            solve(m,n,temp+"U",i-1,j,vis);


    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<vector<bool>> vis(n,vector<bool>(n,0));
        solve(m,n,"",0,0,vis);
        return ans;
    }
};
int main(){
    int num;
    cin>>num;
    bt b;
    vector<vector<int>> ans(num,vector<int>(num,0));
    for(int i=0;i<num;i++) {
        for (int j = 0; j < num; j++) {
            int temp;
            cin>>temp;
            ans[i][j]=temp;
        }
    }

    vector<string> answer= b.findPath(ans,num);
    for(auto i:answer){
        cout<<i<<endl;
    }
}
