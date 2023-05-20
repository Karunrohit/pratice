#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    vector<vector<bool>> answer(r,vector<bool>(c,0));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            bool temp;
            cin>>temp;
            if(temp)
                answer[i][j]=1;
        }
    }
    // cout<<endl;
    int ans=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int temp=0;
            if(i-1>=0 and j>=0 and j<c and !answer[i-1][j] and answer[i][j]){
                temp++;
            }
            if(i+1<r and j>=0 and j<c and !answer[i+1][j] and answer[i][j]){
                temp++;
            }
            if(j-1>=0 and i>=0 and i<r and !answer[i][j-1] and answer[i][j]){
                temp++;
            }
            if(j+1<c and i>=0 and i<r and !answer[i][j+1] and answer[i][j]){
                temp++;
            }
            if((i==0 or j==0 or i==r-1 or j==c-1) and answer[i][j]){
                if((i==0 or i==r-1) and (j==0 or j==c-1)){
                    temp++;
                }
                temp++;
            }
             cout<<temp<<" ";
            ans+=temp;
        }
         cout<<endl;
    }
    cout<<ans;
}