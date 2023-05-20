#include <bits/stdc++.h>
using namespace std;
vector<int> parent;
int findParent(int a){
    if(parent[a]==a)    return a;
    else findParent(parent[a]);
}
void dsu(int a,int b){
    int x= findParent(a);
    int y= findParent(b);
    if(x>y)
        parent[a]=y;
    else
        parent[b]=x;
    return;
}
int main(){
    int num,r;
    cin>>num>>r;
    for(int i=0;i<num;i++) {
        parent.push_back(i);
    }
    for(int i=0;i<r;i++){
        int temp1,temp2;
        cin>>temp1>>temp2;
        dsu(temp1,temp2);
    }
    unordered_map<int,int> m;
    for(int i=0;i<num;i++){
        m[findParent(parent[i])]++;
    }
    cout<<endl;
    vector<int> ans;
    for(auto i: m){
        ans.push_back(i.second);
    }
    long sum=0;
    for(int i=0;i<ans.size();i++){
        for(int j=i+1;j<ans.size();j++){
            sum+=ans[i]*ans[j];
        }
    }
    cout<<sum<<endl;
}

