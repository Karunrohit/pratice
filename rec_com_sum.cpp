#include<bits/stdc++.h>
using namespace std;

void combiSum(int ind,vector<int> &v,int target,vector<int> &ans)
{
    if(ind == v.size() )
    {
        if(target==0) {
            for (auto i: ans)
                cout << i << " ";
            cout << endl;
        }
        return;
    }

    if(v[ind]<=target)
    {
        ans.push_back(v[ind]);
        combiSum(ind,v,target-v[ind],ans);
        ans.pop_back();
    }


    combiSum(ind+1,v,target,ans);




}


int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }

    int target;
    cin>>target;
    set<int> s;
    for(auto i:v){
        s.insert(i);
    }
    v.clear();
    for(auto i:s){
        v.push_back(i);
    }
    vector<int> ans;
    combiSum(0,v,target,ans);
}
