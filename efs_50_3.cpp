#include <bits/stdc++.h>
using namespace std;

vector<int> tokenize(string & s){
    vector<int> tokens;
    stringstream ss(s);
    string token;
    while(getline(ss,token,' ')){
        tokens.push_back(stoi(token));
    }
    return tokens;
}

int main(){
    string s;
    getline(cin,s);
    vector<int> ans= tokenize(s);
    map<int,int> answer;
    int temp1 = ans[0];
    int temp2 = INT_MAX;
    int j=1;
    while(j<ans.size()){
        if(temp2==INT_MAX and temp1+1==ans[j]){
            temp2=ans[j];
        }
        if(temp2!=INT_MAX and temp2+1==ans[j]){
            temp2++;
        }
        if(temp1!=ans[j] and temp2!=ans[j]){
            answer.insert({temp1,temp2});
            temp1=ans[j];
            temp2=INT_MAX;
        }
        j++;
    }
    if(answer.find(temp1)==answer.end()){
        answer.insert({temp1,temp2});
    }
    cout<<"[";
    int count=0;
    int k=answer.size()-1;
    for(auto i:answer){
        if(count==k){
            if(i.second!=INT_MAX){
                cout<<i.first<<"->"<<i.second;
                break;
            }
            else{
                cout<<i.first;
                break;
            }
        }
        if(i.second!=INT_MAX){
            cout<<i.first<<"->"<<i.second<<", ";
        }
        else{
            cout<<i.first<<", ";

        }
        count++;
    }
    cout<<"]";
}