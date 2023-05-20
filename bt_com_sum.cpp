#include <bits/stdc++.h>

using namespace std;
class bt{
public:
    vector<vector<int>> answer;
     vector<vector<int>>combinationSum(vector<int> &ans,int target){
         set<int> s;
         for(auto i:ans){
             s.insert(i);
         }

     }
};
int main(){
    bt b;
    int num;
    cin>>num;

    vector<int> ans;

    for(int i=0;i<num;i++){
        int temp;
        cin>>temp;
        ans.push_back(temp);
    }

    int target;
    cin>>target;

    vector<vector<int>> answer= b.combinationSum(ans,target);
    for(auto i: answer){
        cout<<"(";
        int j=0;
        for(j=0;j<i.size()-1;j++){
            cout<<i[j]<<" ";
        }
        cout<<i[j];
        cout<<")";
    }
}
//#include <bits/stdc++.h>
//using namespace std;
//
//class bt{
//public:
//    vector<vector<int>> answer;
//    set<vector<int>> s;
//    //Function to return a list of indexes denoting the required
//    //combinations whose sum is equal to given number.
//    void solve(vector<int> &arr, int b, vector<int> ans, int sum){
//        if(sum>b){
//            return;
//        }
//        if(sum==b){
//            sort(ans.begin(),ans.end());
//            if(s.find(ans)!=s.end())    return;
//            else{
//                s.insert(ans);
//                answer.push_back(ans);
//                return;
//            }
//        }
//        if(sum<b){
//            for(int i=0;i<arr.size();i++){
//                if(sum+arr[i]<=b){
//                    vector<int> temp=ans;
//                    temp.push_back(arr[i]);
//                    solve(arr,b,temp,sum+arr[i]);
//                }
//            }
//        }
//    }
//
//    vector<vector<int>> combinationSum(vector<int> &arr, int target) {
//        sort(arr.begin(),arr.end());
//        for(int i=0;i<arr.size();i++){
//            if(arr[i]<=target){
//                vector<int> ans;
//                ans.push_back(arr[i]);
//                solve(arr,target,ans,arr[i]);
//            }
//        }
//        sort(answer.begin(),answer.end());
//        return answer;
//    }
//};
//int main(){
//    bt b;
//    int num;
//    cin>>num;
//
//    vector<int> ans;
//
//    for(int i=0;i<num;i++){
//        int temp;
//        cin>>temp;
//        ans.push_back(temp);
//    }
//
//    int target;
//    cin>>target;
//
//    vector<vector<int>> answer= b.combinationSum(ans,target);
//    for(auto i: answer){
//        cout<<"(";
//        int j=0;
//        for(j=0;j<i.size()-1;j++){
//            cout<<i[j]<<" ";
//        }
//        cout<<i[j];
//        cout<<")";
//    }
//}