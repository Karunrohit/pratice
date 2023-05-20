#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;//string initialization
    getline(cin,n);//string input
    stringstream ss(n);
    int k,min_cos=0;
    priority_queue<int,vector<int>,greater<int>> q;//initializing the priority queue
    while (ss>>k){
        q.push(k);//string to int conversion and insertin/pushing the data
    }
    while(!q.empty()){
        int first = q.top();//first element at the top
        q.pop();//deleting the element
        if(q.empty()){
            cout<<min_cos<< endl;//matching the condition
            return 0;
        }
        int second=q.top();//second element at the top
        q.pop();//deleting
        min_cos+=first+second;//adding
        q.push(first+second);//heapify the sum
    }
}