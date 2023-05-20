#include<bits/stdc++.h>
using namespace std;
bool istrue(vector<vector<int>>& matrix, int target) {
    int rows=matrix.size();
    int c=matrix[0].size()-1,r=0;
    while(r<rows && c>=0){
        if(matrix[r][c]==target)return 1;
        else if(matrix[r][c]>target)c--;
        else r++;
    }
    return 0;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int>(m));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>matrix[i][j];
    int target;
    cin>>target;
    if(istrue(matrix,target)){
    cout<<"true";
    }
    else{
        cout<<"false";
    }
}



