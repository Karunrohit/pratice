//
// Created by User on 28/12/2021.
//
#include <bits/stdc++.h>
using namespace std;
int combination(int k){
    return (k*(k-1))/2;//returning the combinations
}
int main(){
    int row,column;//initializing the size of thee array
    cin>>row>>column;
    vector<int> nums;//initialization of array
    for(int i=0;i<row;i++){
        string rowlength=""; //initializing temp for input of vector
        for(int j=0;j<column;j++){
            char temp;//initalizing the input
            cin>>temp;
            rowlength+=temp;//creating a string for conversion of string to binary int
        }
        nums.push_back(stoi(rowlength,0,2));//conversion of string to binary

    }
    int count=0;
    for(int i=0;i<row;i++){
        for(int j=i+1;j<column;j++){
            int k=__builtin_popcount(nums[i]&nums[j]);//counting no of 1s for and operation between 2 columns
            count+= combination(k);//adding the possible combinations of the given rows
        }
    }
    cout<<count;//output
}
