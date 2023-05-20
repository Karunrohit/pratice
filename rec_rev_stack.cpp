#include <bits/stdc++.h>
using namespace std;
class class_s {
public:
    void reverse(stack<int> &q){
        if(q.empty())   return;
        int temp=q.top();
        q.pop();
        reverse(q);
        q.push(temp);
    }


    void print(stack<int> &q){

        if(q.empty())   return;

        int temp=q.top();
        q.pop();
        cout<<temp<<" ";
        print(q);
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

    o.reverse(q);

    o.print(q);
}
