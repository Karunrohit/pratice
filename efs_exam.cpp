#include <bits/stdc++.h>
using namespace std;
vector<string> tokenize(const string& str){
    vector<string> tokens;
    stringstream ss(str);
    string token;
    while(getline(ss,token,' ')){
        tokens.push_back(token);
    }
    return tokens;
}
int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    vector<string> arr= tokenize(s1);
    vector<string> input= tokenize(s2);
    vector<bool> is_true;
    set<string > final_array;
    for (int i = 0; i < arr.size(); ++i) {
        final_array.insert({arr[i]});
    }
    for (int i = 0; i < input.size(); i++) {
        is_true.push_back(1);
    }
    for(int i=0;i<input.size();i++){
        bool c=0;
        string temp1= input[i];
       for(auto j:final_array){
          if(j!=temp1 and temp1.size()==j.size() and j[0]==temp1[0] and j[j.size()-1]==temp1[j.size()-1]){
            is_true[i]=c;
          }
       }
    }
    for (int i = 0; i < is_true.size(); i++) {
        if(is_true[i]){
            cout<<"true ";
        }
        else{
            cout<<"false ";
        }
    }
}