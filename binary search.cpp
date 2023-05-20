//
// Created by User on 16/12/2021.
//
#include <bits/stdc++.h>
using namespace std;
vector<int> arr;
int binary_s(int low, int high, int number) {
    if(high>=low) {
        int mid = (low + high) / 2;
        if(arr[mid]==number){
            cout<<arr[mid];
            return mid;
        }
        else if(arr[mid]<number){
            binary_s(mid+1,high,number);
        }
        else{
            binary_s(low,mid-1,number);
        }
    }
    else
     return -1;

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
    int s=binary_s(0,r,number);
    if(s!=-1){
        cout<<s+1;
    }
    else{
        cout<<"Not found";
    }
}
