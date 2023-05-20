#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int arr[num];
    for (int i = 0; i < num; ++i) {
        cin>>arr[i];
    }
    int sum=0;
    for(int i=1;i<num;i++){
        sum=sum+arr[i-1];
        if(sum>=arr[i+1]){
            cout<<arr[i];
            return 0;
        }
    }
}