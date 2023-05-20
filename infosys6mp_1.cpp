#include <bits/stdc++.h>
using namespace std;
//vector<int>parent;
//int findParent(int a){
//    if(parent[a] == a){
//        return a;
//    }
//    else{
//        return parent[a] = findParent(parent[a]);
//    }
//}
//void union1(int a, int b){
//    a = findParent(a);
//    b = findParent(b);
//    if(a<b){
//        parent[b] = a;
//    }
//    else{
//        parent[a] = b;
//    }
//}
//int main(){
//    int num;
//    cin>>num;
//    vector<int> arr;
//    for(int i=0;i<num;i++){
//        int temp;
//        cin>>temp;
//        arr.push_back(temp);
//    }
//    sort(arr.begin(),arr.end());
//    for(int i=0;i<num;i++){
//        parent.push_back(i);
//    }
//    for(int i=0;i<num;i++){
//        for(int j=i+1;j<num;j++){
//            if(arr[j]%arr[i]==0){
//                union1(parent[i],parent[j]);
//            }
//        }
//    }
//    map<int,int> m;
//    for(int i=0;i<num;i++){
//        int x=findParent(parent[i]);
//        if(m.find(x)==m.end())  m.insert({x,1});
//        else m[x]++;
//    }
//    cout<<m.size()-1;
//}
//
int main(){
    int num;
    cin>>num;
    vector<int> arr;
    for(int i=0;i<num;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int max=INT_MIN;
    for(int i=0;i<num;i++){
        if(max<arr[i])  max=arr[i];
    }
    vector<int>prime_no;
    for(int i=0;i*i<max;i+=6){
        a
    }
}
