#include <bits/stdc++.h>
using namespace std;
string getNumString(char n) {
    switch (n) {
        case '0':
            return "";
        case '1':
            return "";
        case '2':
            return "abc";
        case '3':
            return "def";
        case '4':
            return "ghi";
        case '5':
            return "jkl";
        case '6':
            return "mno";
        case '7':
            return "pqrs";
        case '8':
            return "tuv";
        case '9':
            return "wxyz";
    }
}
vector<string> solve(char k,vector<string> &p)
{
    vector<string> ans;
    for(auto &i: getNumString(k)){
        for(auto &j:p){
            ans.push_back(j+i);
        }
    }
    return ans;
}
int main()
{
    string s;
    cin>>s;
    vector<string> v;
    for(auto j: getNumString(s[0])){
        string c(1,j);
        v.push_back(c);
    }
    if(s.size()!=1){
        for(int i=1;i<s.length();i++){
            v=solve(s[i],v);
        }
    }
    sort(v.begin(),v.end());
    for(auto &j:v)
        cout<<j<<" ";
}