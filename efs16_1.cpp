#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    bool temp=0;
    int count=0;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            if(temp){
                continue;
            }
        }
        else{
            if(temp==0){
                continue;
            }
        }
        temp=1-temp;
        count++;
    }
    cout<<count;
}