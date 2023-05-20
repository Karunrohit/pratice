#include<bits/stdc++.h>
using namespace std;

class rec_{
public:
    int answer(vector<int> &ans, int k, int i){
        if(ans.size()==1){
            return ans[0];
        }
        i = (i+k) % ans.size();
        ans.erase(ans.begin()+i);
        return answer(ans,k,i);
    }
};

int main(){
 int num,k;
 rec_ r;
 cin>>num>>k;

 vector<int> ans;

 for(int i=1;i<=num;i++){
     ans.push_back(i);
 }
 cout<<r.answer(ans,k-1,0);

}
