#include <bits/stdc++.h>
using namespace std;
class greedy{
public:
    int maximumSum( int n,int m, vector<vector<int>> &arr) {
        int sum=0;
        vector<int> answer;
        int mi=INT_MIN;
        for(int i=0;i<m;i++){
            if(mi<arr[n-1][i])  mi=arr[n-1][i];
        }
        sum+=mi;
        answer.push_back(mi);
        for(int i=n-2;i>=0;i--){
            priority_queue<int> q;
            for(int j=0;j<m;j++){
                q.push(arr[i][j]);
            }
            cout<<endl;
            bool is=0;
            while(q.size()){
                if(q.top()<answer[answer.size()-1]){
                    is=1;
                    answer.push_back(q.top());
                    sum+=q.top();
                    break;
                }
                q.pop();
            }
            if(!is) return 0;
            is=0;
            continue;
        }
        return sum;

        // Complete the function
    }
};
int main(){
    int n,m;
    cin>>n>>m;
    greedy g;
    vector<vector<int>> arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<g.maximumSum(n,m,arr)<<endl;

}