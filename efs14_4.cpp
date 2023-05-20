#include <bits/stdc++.h>
using namespace std;

//int max_Subarray_mul(vector<int> arr, int n){
//    int product=1;
//    int max=-1000000;
//    for(int i=0;i<n;i++){
//        product=product*arr[i];
//        if(product>max){
//            max=product;
//        }
//        if(product<0 && arr[i+1]>0){
//            product=1;
//        }
//    }
//    // Your code here
//    return max;
//}
int max_Subarray_mul(vector<int> arr, int n){
    long long  maP=INT_MIN,cur=1,p=INT_MIN;
    for(int i=0;i<n;i++)
    {

        cur*=arr[i];
        if(p!=INT_MIN)
            p*=arr[i];
        maP=max(maP,max(cur,p));
        if(cur==0){
            cur=1;
            p=INT_MIN;
        }
        if(cur<0 and p<0){
            p=cur;
            cur=1;
        }
    }
    return maP;


}
int main(){
    int num;
    cin>>num;
    vector<int> arr;
    for (int i = 0; i < num; i++) {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<max_Subarray_mul(arr,num);
}