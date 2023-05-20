#include <bits/stdc++.h>
using namespace std;

class rec_{
public:
    set<string> ans;
    void answer(string s, string temp,int i){

        if(i==s.size()){
            ans.insert(temp);
            return;
        }
        if(s[i]<'a')
            answer(s,temp+(char)(s[i]+32),i+1);
        else
            answer(s,temp+(char)(s[i]-32),i+1);
        answer(s,temp+s[i],i+1);

    }

};

int main(){
    string s;
    cin>>s;
    rec_ r;
    r.answer(s,"",0);
    for(auto i: r.ans){

        cout<<i<<endl;
    }
}


