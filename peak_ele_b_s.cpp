#include <bits/stdc++.h>
using namespace std;
vector<int> arr;
int binary_s(int low,int high){
    if(low==high)   return 0;
    if(low+1==high)  return max(arr[low],arr[high]);
    while(low<=high){
        int mid=(low+high)/2;
        if((mid==0 or arr[mid]>=arr[mid-1]) and (arr[mid]>=arr[mid+1] or mid==arr.size()-1))   return mid;
        else{
            if(mid>0 and arr[mid]<=arr[mid-1])  high=low-1;
            else    low=mid+1;
        }
    }
}
int main(){
    int r;
    cin>>r;
    for(int i=0;i<r;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int number;
    cin>>number;
    int s=binary_s(0,r);

    cout<<arr[s];

}

