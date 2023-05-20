#include<bits/stdc++.h>
using namespace std;
class bt{
public:
    int ans=INT_MIN;
    map<string,int> se;
    void answer(string s,int i){
        if(i==s.size()){
            int k=se.size();
            for(auto i: se){
                cout<<i.first<<" ";
            }
            cout<<endl;
            ans= max(k,ans);
            return;
        };
        for(int j=i;j<=s.length();j++){
            string str=s.substr(i,j+1);
            if(se.find(str)==se.end()){
                se.insert({str,1});
                answer(s,j+1);
                se.erase(str);
            }

        }
    }
};
int main(){
    string s;
    cin>>s;

    bt b;
    b.answer(s,0);
    for(auto i: b.se){
        cout<<i.first<<endl;
    }
    cout<<b.ans;

}