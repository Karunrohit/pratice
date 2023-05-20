#include <bits/stdc++.h>
using namespace std;
bool helper(string s,int i,int j){
    while(i<j){
        if(s[i]!=s[j])  return 0;
        i++;
        j--;
    }
    return 1;
}
int solve(string s, int num){
    int count=0;
    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){
            if(helper(s,i,j))
                //cout<<i<<" "<<j<<endl;
                count++;

        }
    }
    return count;
}
int main(){
    string s;
    getline(cin,s);
//    int num;
//    cin>>num;
    cout<<solve(s,s.size());
}