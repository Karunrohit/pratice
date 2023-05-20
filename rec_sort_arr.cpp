#include <bits/stdc++.h>
//
using namespace std;
class rec_{
public:
    vector<int> insertion_sort(vector<int> &n,int i, int j){
        if(i==n.size()) return n;

        if(j==n.size() and i!=n.size()){
            return insertion_sort(n,i+1,i+2);
        }
        if(n[i]>n[j]){
            swap(n[i],n[j]);
        }
        return insertion_sort(n,i,j+1);
    }
};
//#include <bits/stdc++.h>
//using namespace std;
//class class_s {
//public:
//    void sort(stack<int> &v) {
//
//        if (v.size() == 1) return;
//
//        int temp = v.top();
//        v.pop();
//        sort(v);
//        in(v, temp);
//    }
//
//    void in(stack<int> &v, int temp) {
//
//        if (v.empty() or v.top() <= temp) {
//            v.push(temp);
//            return;
//        }
//
//        int val = v.top();
//        v.pop();
//        in(v, temp);
//        v.push(val);
//    }
//
//    void print(stack<int> &q){
//
//        if(q.empty())   return;
//
//        int temp=q.top();
//        q.pop();
//        print(q);
//        cout<<temp<<" ";
//    }
//};
//class rec_{
//public:
//    vector<int> sort(vector<int> &arr,int i,int j){
//
//    if(i==arr.size())   return  arr;
//
//    if(j==arr.size() and i!=arr.size()){
//
//      return sort(arr,i+1,i+2);
//
//    }
//
//    if (arr[i] > arr[j]) {
//        swap(arr[i],arr[j]);
//
//    }
//    return sort(arr,i,j+1);
//    }
//    void print(vector<int> arr,int i){
//        if(i==arr.size()-1){
//            return;
//        }
//        cout<<arr[i]<<" ";
//        print(arr,i+1);
//    }
//};

int main() {
    int m;
    cin>>m;

    vector<int> q;

    for(int i=0;i<m;i++){
        int tempo;
        cin>>tempo;
        q.push_back(tempo);
    }

    rec_ a;
    a.insertion_sort(q,0,1);

//    class_s o;
//
//    o.sort(q);
//
    for(auto i:q){
        cout<<i<<" ";
    }
}
