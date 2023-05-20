#include <bits/stdc++.h>

using namespace std;
int main(){
    int num;
    cin>>num;
    vector<int> arr;
    for(int i=0;i<num;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int temp;
    cin>>temp;
    int i=0;
    int j=num-1;
    bool k=0;
    while(i!=j){
        if(arr[i]+arr[j]==temp){ k=1; cout<<i<<" "<<j<<endl;}
        if(arr[i]+arr[j]<temp)  i++;
        else    j--;
    }
    if(!k)
        cout<<"-1";
}