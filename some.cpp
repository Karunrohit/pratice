#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int m;
    cin>>m;
    string s1="";
    for(int i=0;i<m;i++){
        int count=1;
        for(int j=0;j<s.length();j++){
            if(s[j]!=s[j+1]){
                int count1=count;
                s1=s1+to_string(count1)+s[j];
                count=1;
            }
            else {
                count++;
            }
        }
        s=s1;
        s1="";
    }
    cout<<s;
}