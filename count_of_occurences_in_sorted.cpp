//
// Created by User on 24/06/2022.
//

#include <bits/stdc++.h>
using namespace std;
vector<int> arr;

int binary_s(int low, int high, int number) {
    if(high>=low) {
        int mid = (low + high) / 2;
        if(arr[mid]>number){
            binary_s(low,mid-1,number);
        }
        else if(arr[mid]<number){
            binary_s(mid+1,high,number);
        }
        else{
            if(arr[mid]!=arr[mid+1] or mid==arr.size()){
                return mid;
            }
            else{
                binary_s(mid+1,high,number);
            }
        }
    }
    else
        return -1;

}
int binary_s(int low, int high, int number, bool d) {
    if(high>=low) {
        int mid = (low + high) / 2;
        if(arr[mid]>number){
            binary_s(low,mid-1,number,0);
        }
        else if(arr[mid]<number){
            binary_s(mid+1,high,number,0);
        }
        else{
            if(arr[mid]!=arr[mid-1] or mid==0){
                return 1+(binary_s(mid,arr.size()-1,arr[mid])-(mid-1));
            }
            else{
                binary_s(low,mid-1,number,0);
            }
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
    if(s>-1){
        cout<<s;
    }
    else{
        cout<<"Not found";
    }
}
