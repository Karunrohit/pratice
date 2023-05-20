#include <bits/stdc++.h>
using namespace std;
int main() {
    int num;
    cin >> num;
    vector<int> arr;
    for (int i = 0; i < num; ++i) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    int avg=0;
    for(int i=0;i<num;i++)  avg+=arr[i];
    avg/=num;
    sort(arr.begin(),arr.end());
    int i=0;
    int j=num-1;
    int count=0;
    while(i!=j){

        if(arr[i]<avg and arr[j]>avg){
            count++;
            arr[i]++;
            arr[j]--;
        }
        else if(arr[j]==avg){
            j--;
        }
        else{
            i++;
        }
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<num-1;i++) count+=arr[num-1]-arr[i];
    cout<<count;
//    count+=arr[num-1]-arr[i]
}