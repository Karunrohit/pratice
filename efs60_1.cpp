#include<bits/stdc++.h>
using namespace std;
priority_queue<pair<int,int>>ans;
void helper(string s){
    int vowel[5];
    for(int i=0;i<5;i++)    vowel[i]=0;
    for(auto i:s){

        if(i=='a')  vowel[0]++;
        if(i=='e')  vowel[1]++;
        if(i=='i')  vowel[2]++;
        if(i=='o')  vowel[3]++;
        if(i=='u')  vowel[4]++;
    }
//    cout<<((vowel[0]*1)+(vowel[1]*2)+(vowel[2]*3)+(vowel[3]*4)+(vowel[4]*5))<<" "<<s.size()<<endl;
    ans.push({((vowel[0]*1)+(vowel[1]*2)+(vowel[2]*3)+(vowel[3]*4)+(vowel[4]*5)),s.size()});
}
int main(){
    string temp;
    cin>>temp;
    for(int i=0;i<=temp.size();i++){
        for(int j=i;j<=temp.size();j++){
            string t=temp.substr(i,j-(i-1));
//            cout<<t<<endl;
            helper(t);
        }
    }
    cout<<ans.top().second;
}
