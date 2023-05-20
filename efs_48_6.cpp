#include<bits/stdc++.h>
using namespace std;
class sol{
public:
    bool check(char tempo,string s,int i,bool istrue){
        if(i==s.size()) return 0;
        char mi=min(tempo,s[i]);
        if(mi!=tempo and !istrue){
            istrue=1;
        }
        if(s[i]==tempo and istrue){
            return 1;
        }
        return check(tempo,s,i+1,istrue);
    }
};
int main(){
    string s;
    cin>>s;
    string temp="";
    map<char,bool> ma;
    sol ans;
    for(int i=0;i<s.size();i++){
        if(ma[s[i]]==0){
            if(ans.check(s[i],s,i+1,0)){
                continue;
            }
            else{
                temp+=s[i];
                ma[s[i]]++;
            }
        }
        else{
            continue;
        }
    }
    cout<<temp<<endl;
}