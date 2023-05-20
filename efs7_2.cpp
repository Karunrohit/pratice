//
// Created by User on 21/12/2021.
//
#include <bits/stdc++.h>
int r;
int c;
bool istrue=false;
int answer;

void sol(vector<vector<int>> &arr,vector<vector<bool>> &v,int i,int j){
    if(i<0 or i>r or j<0 or j>c or v[i][j]==true ){
        return;
    }
    v[i][j]=true;
    if(answer<arr[i-1][j] and answer<arr[i][j-1] and answer<arr[i-1][j-1]){
        v[i-1][j]=true;
        v[i][j-1]=true;
        v[i-1][j-1]=true;
        sol(arr,v,i-2,j-2);
    }
    if(answer>=arr[i-1][j] and answer>arr[i-1][j-1] and answer>arr[i][j-1]){
        if(answer==arr[i-1][j]){
            istrue=true;
            return;
        }
        v[i-1][j]=true;
        v[i][j-1]=true;
        v[i-1][j-1]=true;
        sol(arr,v,i-1,j);
    }
    if(answer<arr[i-1][j] and answer>=arr[i-1][j-1] and answer>arr[i][j-1]){
        if(answer==arr[i][j-1]){
            istrue=true;
            return;
        }
        v[i-1][j]=true;
        v[i][j-1]=true;
        v[i-1][j-1]=true;
        sol(arr,v,i,j-1);
    }
    if(answer<arr[i-1][j] and answer<arr[i][j-1] and answer>=arr[i-1][j-1]){
        if(answer==arr[i-1][j-1]){
            istrue=true;
            return;
        }
        v[i-1][j]=true;
        v[i][j-1]=true;
        v[i-1][j-1]=true;
        sol(arr,v,i-1,j-1);
    }
}
using namespace std;
int main(){
    cin>>r;
    cin>>c;
   vector<vector<int>> grid(r,vector<int>(c));
    vector<vector<bool>> visited(r,vector<bool> (c,false));

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin>>grid[i][j];

        }
    }
    cin>>answer;
    sol(grid,visited,r,c);
    if(istrue){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}