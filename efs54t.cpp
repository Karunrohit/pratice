//
// Created by User on 20/12/2021.
//

//
// Created by User on 20/12/2021.
//
#include <bits/stdc++.h>
using namespace std;
int r;
int c;
int count=0;
int dfs(vector<vector<int>> &arr,int i,int j){
    if(i<0 or i>r or j<0 or j>c){
        return INT_MAX;
    }
    else if(i==r-1 and j==c-1){
        return arr[i][j];

    }
    else{
        int z=min(dfs(arr,i+1,j), dfs(arr,i,j+1));
        if(z==INT_MAX){
            return z;
        }
        else
        return arr[i][j]+z;

    }
}
int main(){
    cin>>r>>c;
    vector<vector<int>> arr;
    for (int i = 0; i < r; i++) {
        vector<int> temp1;
        for(int j=0;j<c;j++){
            int temp;
            cin>>temp;
            temp1.push_back(temp);
        }
        arr.push_back(temp1);
    }
    cout<<dfs(arr,0,0);
}

