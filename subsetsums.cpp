//
// Created by User on 23/12/2021.
//
#include <bits/stdc++.h>

using namespace std;

int num;

vector<int> recoverArray(int n, vector<int> &sums){
    if(n==num){
        sums.push_back(0);
        return sums;
    }
    int s=0;
    s=sums[n]+sums[n+1];
    sums.push_back(s);
    cout<<s;
    recoverArray(n+1,sums);
}
int main(){
    cin>>num;
    vector<int> sums;
    for(int i=0;i<num;i++ ){
        int temp;
        cin>>temp;
        sums.push_back(temp);
    }
    vector<int> answer =recoverArray(0,sums);
    sort(answer.begin(),answer.end());
    for(int i=0;i<num;i++){
        cout<<answer[i]<<" ";
    }
}