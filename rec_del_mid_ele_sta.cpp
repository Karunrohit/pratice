
#include <bits/stdc++.h>
using namespace std;
class class_s {
public:
    void size(stack<int> &s) {
        if(s.empty())  return;
        if(s.size()%2==1){
            return answer(s,ceil((float)s.size()/2));
        }
        return answer(s,ceil((float)s.size()/2)+1);
    }

    void answer(stack<int> &s, int i){
        if(i==1){
            s.pop();
            return;
        }
        int temp=s.top();
        s.pop();
        answer(s,i-1);
        s.push(temp);
    }

    void print(stack<int> &q){

        if(q.empty())   return;

        int temp=q.top();
        q.pop();
        print(q);
        cout<<temp<<" ";
    }
};

int main() {
    int m;
    cin>>m;

    stack<int>q;

    for(int i=0;i<m;i++){
        int tempo;
        cin>>tempo;
        q.push(tempo);
    }

    class_s o;

    o.size(q);

    o.print(q);
}
