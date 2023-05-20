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
    string str;
    getline(cin, str);
    vector<string> arr = tokenize(str);
    set<string > s1;
    for(int i=0;i<arr.size();i++){
        string temp=arr[i];
        string tempo="";
        bool flag=0;
        bool temp1=1;
        for(int j=0;j<temp.size();j++){
            if(temp[j]=='+'){
                flag=1;
            }
            if(temp[j]=='.' && temp1==1){
                continue;
            }
            if(temp[j]=='@'){
                flag=0;
                temp1=0;
            }
            if(!flag) {
                tempo = tempo + temp[j];
            }
        }
        arr[i]=tempo;
    }
    for(auto &i:arr){
        s1.insert(i);
    }

    cout<<s1.size()<<endl;

}