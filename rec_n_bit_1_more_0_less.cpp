#include <bits/stdc++.h>
using namespace std;

class rec_{
public:
    set<string> ans;
    void answer(int s, string temp,int one, int zero){

        if(temp.size()==s){
            ans.insert(temp);
        }
        if(temp.size()==s+1)   return;

        answer(s,temp+"1",one+1, zero);
        if(zero<one-1)
            answer(s,temp+"0",one,zero+1);

    }

};

int main(){
    int s;
    cin>>s;
    rec_ r;
    r.answer(s,"1",1,0);
    for(auto i: r.ans){

        cout<<i<<endl;
    }
}
