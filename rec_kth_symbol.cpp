#include <bits/stdc++.h>
using namespace std;

class rec_{

public:
//    string temp="0"; // n log n approach
//    void check(int i,int size){
//        if(size==0) return;
//
//        if(temp[i] == '0' ){
//            temp.insert(i+1,"1");
//        }
//        if(temp[i] == '1' ){
//            temp.insert(i+1,"0");
//        }
//        check(i+2,size-1);
//
//    }
//    int kthGrammar(int n,int k){
//
//        if(temp.size()==pow(2,n-1)){
//            return temp[k-1]-'0';
//        }
//        check(0,temp.size());
//        kthGrammar(n,k);
//
//    }

    int kthGrammar(int n, int k) {

        if(n==1)return 0;

        if(k%2==0){
            return (kthGrammar(n-1,k/2)==0) ? 1:0;

        }
        else{
            return(kthGrammar(n-1,(k+1)/2)==0) ? 0:1;
        }
    }
};
int main(){
    int n,k;
    cin>>n>>k;

    rec_ r;

    cout<<r.kthGrammar(n,k);
}