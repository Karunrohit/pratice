#include <bits/stdc++.h>
using namespace std;

class bt{
public:
    vector<vector<int>> answer;

    bool is_safe(int i, int j,int n,vector<vector<bool>> &is_vis){
        bool a1=false,a4= false,a5= false,a6= false;
        for(int k=n;k>0;k--){
            a1||is_vis[i][k];
        }
        int k=i;
        int l=j;
        while(k!=0 and l!=0){
            a4||is_vis[k][l];
            k--;
            l--;
        }
        k=i;
        l=j;
        while(k!=n and l!=n and k!=0 and l!=0){
            a5||is_vis[k][l];
            k--;
            l++;
        }
        k=i;
        l=j;
        while(k!=n and l!=n and k!=0 and l!=0){
            a6||is_vis[k][l];
            k++;
            l--;
        }
        return a1||a4||a5||a6;
    }
    void solve(int n,int i, int r,vector<int> temp,priority_queue<int, vector<int>, greater<int>>  q, stack<int>  s,vector<vector<bool>> &is_vis){
        if(temp.size()==n and i!=n and !is_safe(i,r,n,is_vis) and q.empty() and s.empty()){
            for(auto j: temp){
                j++;
            }
            answer.push_back(temp);
            r=q.top();
            q.pop();
            temp.clear();
            solve(n,i+1,r,temp,q,s,is_vis);
            return;
        }

        if(temp.size()==n and i==n and !is_safe(i,r,n,is_vis) and q.empty() and s.empty()){
            for(auto j: temp){
                j++;
            }
            answer.push_back(temp);
            return;
        }
        if(!is_safe(i,r,n,is_vis) and !s.empty()){
            while(!s.empty()){
                q.push(s.top());
                s.pop();
            }
            is_vis[i][r]=1;
            temp.push_back(r);
        }
        if(is_safe(i,r,n,is_vis) and q.empty() and !s.empty()){
            is_vis[i][r]=0;
            int t=temp[temp.size()-1];
            temp.pop_back();
            while(!s.empty()){
                q.push(s.top());
            }
            s.push(s.top());
            r=q.top();
            q.pop();
            solve(n,i-1,r,temp,q,s,is_vis);
        }

    }
    vector<vector<int>> nQueen(int n) {
        priority_queue<int, vector<int>, greater<int>> q;
        stack<int> s;
        vector<vector<bool>> is_vis(n,vector<bool>(n,0));
        for(int i=0;i<n;i++){
            q.push(i);
        }
        q.pop();
        vector<int> temp;
        solve(n,0,0,temp,q,s,is_vis);

    }
};

int main(){
    bt b;
    int num;
    cin>>num;
    vector<vector<int>> answer= b.nQueen(num);
    for(auto i: answer){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
