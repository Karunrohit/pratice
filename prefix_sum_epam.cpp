#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> ans,int num){
    if(num==0 or num==1)    return num;
    vector<int> zeros;
    for(int i=1;i<num;i++){
        if(ans[i]!=0)   ans[i]+=ans[i-1];
        else{
            zeros.push_back(i);
        }
    }
    int ma=1;
    for(int i=1;i<zeros.size();i++){
        ma=max(ma,ans[zeros[i]-1]+ans[zeros[i-1]-1]+1);
    }
    if(zeros[zeros.size()-1]!=num-1){
        ma=max(ma,ans[num-1]+ans[zeros[zeros.size()-1]-1]+1);
    }
    return ma;
}
int main(){
    int num;
    cin>>num;
    vector<int> ans;
    for(int i=0;i<num;i++){
        int temp;
        cin>>temp;
        ans.push_back(temp);
    }
    cout<<solve(ans,num);
    return 0;
}