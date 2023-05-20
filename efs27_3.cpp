
#include <bits/stdc++.h>

using namespace std;
int main(){
    int m,n,s;
    cin>>m>>n>>s;
    int sum=0;
    vector<string> arr;
    for(int i=0;i<s;i++){
        string temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int j=0;
    for(int i=0;i<m;i++){
       int count=0;
       while(count<=n){
           cout<<j<<" ";
           if(count==n){
               break;
           }
           if(j==s-1){
               j=0;
               sum++;
           }
           if(count==0)
            count+=arr[j].size();
           else {
               if ((count += 1 + arr[j].size())>n)
                   break;
               count += 1 + arr[j].size();
           }
           j++;

       }
    }
cout<<sum;
}