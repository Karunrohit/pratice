#include <bits/stdc++.h>
using namespace std;
    int Frequency(vector<int>& nums, int k) {
        int ans = 1;
        sort(nums.begin(), nums.end());
        long sums = 0;
        for(int r=0; r < nums.size(); r++){
            sums += nums[r];
            int l=0;
            while(l < r && sums + k < long(nums[r]) * (r - l + 1)){
                sums -= nums[l];
                l++;
            }
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
int main(){
    int num,chance;
    cin>>num>>chance;
    vector<int>arr;
    for (int i = 0; i < num; i++) {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<Frequency(arr,chance)<<endl;
}