//
// Created by User on 24/01/2022.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int num;
    cin>>s>>num;
    stack<pair<char,int>> sta;
    for(int i=0;i<s.size();i++){
        if(sta.empty())
            sta.push({s[i],1});
        else{
            if(sta.top().first==s[i]){
                sta.push({s[i],sta.top().second+1});
                if(sta.top().second==num){
                    for(int i=0;i<num;i++)
                        sta.pop();
                }
            }
            else{
                sta.push({s[i],1});
            }
        }
    }
    string ans="";
    while (!sta.empty()){
        ans=sta.top().first+ans;
        sta.pop();
    }
    cout<<ans<<endl;
}