#include <bits/stdc++.h>
using namespace std;
bool helper(int temp,int j, bool in){
    int k=temp;
    while(k>0){
        int a=k%10;
        if(a==j){
            return 1;
        }
        k/=10;
    }
    if(helper((temp-j),j)){
        return 1;
    }
    cout<<"NO";
}
int main(){
    int x;
    cin>>x;
    while (x--){
        int i,j;
        cin>>i>>j;
        vector<int> ans;
        for(int k=0;k<i;k++){
            int temp;
            cin>>temp;
            ans.push_back(temp);
        }
        for(auto l:ans){
            helper(l,j);
        }
    }
}