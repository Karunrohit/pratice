#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    vector<int> time(num,0);
    priority_queue<int,vector<int>,greater<int>> q;
    for (int i = 0; i < num; i++) {
        int temp1,temp2;
        cin>>temp1>>temp2;
        time[i]=temp1;
        q.push(temp2);
    }
    sort(time.begin(),time.end());
    int count=0;
    for(int i=0;i<time.size();i++){
        int temp=time[i];
        if(!q.empty() and time[i]>=q.top()){
            q.pop();
        }
        else{
            count++;
        }
    }
    cout<<count;
}

