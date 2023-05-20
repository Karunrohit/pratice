#include <bits/stdc++.h>

using namespace std;
int main(){
    string s="hyderabad";
//    getline(cin,s);

    vector<bool> ans(s.size()-1,0);

    for(int i=0;i<s.size();i++){
        if(s[i]==' ') ans[i]=1;
    }
    int count=3;
    string is="";
    for(int i=0;i<s.size();i++){
        if(ans[i])  is+=s[i];
        else    is+='?';
    }
    cout<<is<<endl;
    while(count){
        string s1;
        cin>>s1;
        size_t k=s.find(s1);
        if(k!=string::npos) {
            while (k != s.size() and k!=string::npos) {
                fill(ans.begin()+k,ans.begin()+k+s1.size(),1);
                for(int i=0;i<s.size();i++){
                    if(is[i]=='?' and ans[i]) is[i]=s[i];
                }
                if(s==is){
                    cout<<"you win"<<endl;
                    return 0;
                }
                k=s.find(s1,k+1);
            }
        }
        else{
            count--;
        }
        cout<<"the character near is is:"<<is<<endl<<"chances left are:"<<count<<endl;
    }
    cout<<"you lost";
}
