#include <bits/stdc++.h>
using namespace std;

class rec_{
public:
    set<string> ans;
    void answer(int s, string temp,int one, int two){

        if(one==0 and two==0){
            ans.insert(temp);
            return;
        }
        if(one!=0)
            answer(s,temp+"(",one-1, two);
        if(two>one)
            answer(s,temp+")",one,two-1);

    }

};

int main(){
    int s;
    cin>>s;
    rec_ r;
    r.answer(s,"(",s-1,s);
    for(auto i: r.ans){

        cout<<i<<endl;
    }
}
