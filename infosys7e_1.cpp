#include <bits/stdc++.h>
using namespace std;
int solve(int s, string str){
    int no_1=0;
    int no_0=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='0')  no_0++;
        else    no_1++;
    }
    return min(no_1,no_0);
}
int main(){
    int s;
    cin>>s;
    string str;
    cin>>str;
    cout<<solve(s,str);
}