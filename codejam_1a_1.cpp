#include<bits/stdc++.h>
using namespace std;
class greedy{
public:
    priority_queue<string, vector<string>, greater<string>> answer;

    void lex_sma_order(string s, int i, int size){
        if(size==0){
            return;
        }
        string temp=s;
        temp.insert(temp.begin()+i,s[i]);
        answer.push(s);
        answer.push(temp);
        lex_sma_order(s,i+1,size-1);
        lex_sma_order(temp,i+2,size-1);
    }

};
int main(){
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        string s;
        cin>>s;
        greedy st;
        st.lex_sma_order(s,0,s.size());
        cout<<"Case #"<<i<<": "<<st.answer.top()<<endl;

    }
}
