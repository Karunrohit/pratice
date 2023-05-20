//
// Created by User on 23/04/2022.
//

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

        answer(s,temp+" "+s[i],i+1);
        answer(s,temp+s[i],i+1);

    }

};

int main(){
    string s;
    cin>>s;
    rec_ r;
    r.answer(s,"a",1);
    for(auto i: r.ans){

        cout<<i<<endl;
    }
}
