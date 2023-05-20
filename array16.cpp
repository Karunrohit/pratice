//
// Created by User on 27/01/2022.
//

#include <bits/stdc++.h>

using namespace std;
int main(){
    int num;
    cin>>num;
    vector<int> nums;
    for (int i = 0; i < num; ++i) {
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    int i=nums.size()-2;
    while(i>=0 and nums[i+1]<=nums[i])
        i--;
    if(i>=0){
        int j=nums.size()-1;
        while(j>=0 and nums[j]<=nums[i])
            j--;
        swap(nums[i],nums[j]);

    }
    sort(nums.begin()+i+1,nums.end());

    for (int i = 0; i < num; ++i) {
        cout<<nums[i]<<" ";
    }
}