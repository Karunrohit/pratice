#include<bits/stdc++.h>
using namespace std;
vector<int>arr;
int binary_s(int low,int high,int number){
    while(low<=high){
        int mid=(high+low)/2;
        if(arr[mid]==number)    return mid;

        if(arr[low]<arr[mid]){
            if(number>=arr[low]and number<arr[mid])
                high=mid-1;
            else
                low=mid+1;
        }

        else{
            if(number>arr[mid] and number<=arr[high])
                low=mid+1;
            else
                high=mid-1;
        }
    }
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