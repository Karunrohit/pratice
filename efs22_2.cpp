#include<bits/stdc++.h>
using namespace std;
int main()
{
    string string1;
    cin>>string1;
    unordered_map<char,int> m1;
    unordered_map<char,int> value;
    stack<char> sta;string temp="";
    for(int i=0;i<string1.length();i++){
        m1[string1[i]]=i;
    }
    for(int i=0;i<string1.length();i++){
        if(!value[string1[i]]){
            while(!sta.empty() and i<m1[sta.top()] and string1[i]<sta.top()){
                value[sta.top()]--;
                sta.pop();
            }
            sta.push(string1[i]);
            value[string1[i]]++;
        }
    }
    while(!sta.empty()){
        temp+=sta.top();
        sta.pop();
    }
    reverse(temp.begin(),temp.end());
    cout<<temp<<endl;
}