#include <bits/stdc++.h>
using namespace std;
int main(){
//    int num;
//    cin>>num;
    vector<string> ans;
    string line="";
    while (getline(cin, line))
    {
        if (line.empty()) {
            break;
        }
        ans.push_back(line);
    }
    int num=ans.size();
    sort(ans.begin(),ans.end());
    set<tuple<string,string,string >> solution;
    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){
            for(int k=j+1;k<num;k++){
                solution.insert({ans[i],ans[j],ans[k]});
            }
        }
    }
    cout<<endl;
    for(auto i: solution){
        cout<<get<0>(i)<<"\t"<<get<1>(i)<<"\t"<<get<2>(i)<<endl;

    }

}