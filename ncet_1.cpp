#include <bits/stdc++.h>
using namespace std;
bool check(int i,int j, int r, int c,vector<vector<bool>> ans){
    if(i>=r or i<0 or j>=c or j<0)    return 0;
    return ans[i][j];
    
}
int main(){
    int r,c;
    cin>>r>>c;

    vector<vector<bool>>    ans(r,vector<bool>(c,0));

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            bool temp;
            cin>>temp;
            if(temp){
                ans[i][j]=1;
            }
        }
    }
    int count=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            bool is_true= (check(i,j-1,r,c,ans) or check(i-1,j,r,c,ans) or check(i+1,j,r,c,ans) or check(i,j+1,r,c,ans)) and ans[i][j];
            if(is_true) count++;
        }
    }
    cout<<count;
}