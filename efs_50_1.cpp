#include <bits/stdc++.h>
using namespace std;
class dy_pr{
public:

    int solution(vector<vector<int>> ans, int i,int size, vector<vector<int>> dp){

        for(int i=1;i<size;i++){
            dp[i][0]=ans[i][0] + min(dp[i-1][1],dp[i-1][2]);
            dp[i][1]=ans[i][1] + min(dp[i-1][0],dp[i-1][2]);
            dp[i][2]=ans[i][2] + min(dp[i-1][1],dp[i-1][0]);
        }
        int min=INT_MAX;
        for(int i=0;i<3;i++)
            if(min>dp[size-1][i])
                min=dp[size-1][i];
        return  min;
    }
};
int main(){
    int num;
    cin>>num;

    vector<vector<int>> dp(num,vector<int>(3,INT_MAX));
    vector<vector<int>> ans;
    dy_pr d;

    for(int i=0;i<num;i++){
        int temp1,temp2,temp3;
        vector<int> temp;

        cin>>temp1>>temp2>>temp3;
        temp.push_back(temp1);
        temp.push_back(temp2);
        temp.push_back(temp3);
        ans.push_back(temp);
    }
    for(int i=0;i<num;i++){
        dp[0][i]=ans[0][i];
    }
    cout<<d.solution(ans,0,num,dp)<<endl;
}