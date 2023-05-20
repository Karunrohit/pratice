//
// Created by User on 06/04/2022.
//
#include<bits/stdc++.h>
using namespace std;
unordered_map<string,int> substring;
int length(string s){
    for(int i=0;i<s.length();i++){
        for(int j=i+2;j<s.length();j++){
            if(substring.find(s.substr(i,j))!=substring.end()){
                if(s.substr(i,j)=="nana"){
                    cout<<i<<" "<<j<<endl;
                }
                substring[s.substr(i,j)]++;
                continue;
            }
            else{
                if(s.substr(i,j)=="nana"){
                    cout<<i<<" "<<j<<endl;
                }
                substring.insert({s.substr(i,j),1});
                continue;
            }
        }
    }
    int max=0;
    for(auto i:substring){
        cout<<i.first<<" "<<i.second <<" "<<endl;
        if(i.first.size()>max and i.second!=1){
            max=i.first.size();
        }
    }
    return max;
}
int main(){
    string s;
    cin>>s;
    cout<<length(s);
}