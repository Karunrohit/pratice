#include <bits/stdc++.h>
using namespace std;
int d1000000(vector<int> ans){
    int count=0;
    for(int i=0;i<ans.size();i++){
        if(count<ans[i])    count++;
    }
    return count;
}
int main(){
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        int t;
        cin>>t;
        vector<int> ans;
        for(int i=0;i<t;i++){
            int temp;
            cin>>temp;
            ans.push_back(temp);
        }
        sort(ans.begin(),ans.end());
        cout<<"Case #"<<i+1<<":"<<d1000000(ans)<<endl;
    }
}