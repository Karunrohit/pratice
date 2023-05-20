#include <bits/stdc++.h>

using namespace std;
vector<int> maxval(vector<vector<int>> &solution,int row,int column){
    vector<int> answer;
    for(int i=0;i<row;i++){
        int maximum=INT_MIN;
        for(int j=0;j<column;j++){
            maximum=max(maximum,solution[i][j]);
        }
        answer.push_back(maximum);
    }
    return answer;
}
int main(){
    int row,column;
    cin>>row>>column;
    vector<vector<int>> solution(row,vector<int>(column,0));
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            int temp;
            cin>>temp;
            solution[i][j]=temp;
        }
    }
    vector<int> answer;
    for(int i=0;i<row;i++){
        int maximum=INT_MIN;
        for(int j=0;j<column;j++){
            maximum=max(maximum,solution[i][j]);
        }
        answer.push_back(maximum);
    }
    for(int i=0;i<row;i++){
        cout<<answer[i]<<" ";
    }
}


