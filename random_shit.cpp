#include <bits/stdc++.h>

using namespace std;

int min_amount(int arr[], int n,int k)
{
    sort(arr,arr+n);
    int i=0;
    int min_sum=0;
    int remains=n;
    while(remains>0){
        min_sum+=arr[i];
        i++;
        remains-=(1+k);
    }
    return min_sum;
}

    int main(){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int k;
        cin>>k;
        cout << min_amount(arr, n, k) << endl;
    }

