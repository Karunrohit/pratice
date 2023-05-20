#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    vector<vector<int>> input(num,vector<int>(2,0));
    for(int i=0;i<num;i++){
        int temp1,temp2;
        cin>>temp1>>temp2;
        input[i][0]=temp1;
        input[i][1]=temp2;
    }
    sort(input.begin(),input.end());
    vector<vector<int>> output;
    int j=0;
    output.push_back(input[0]);
    for(int i=1;i<input.size();i++){
        if(input[i][0]<=output[j][1]){
            output[j][1]=max(output[j][1],input[i][1]);
        }
        else{
            output.push_back(input[i]);
            j++;
        }
    }
    for(int i=0;i<output.size();i++){
            cout<<output[i][0]<<" "<<output[i][1]<<endl;

    }
}

