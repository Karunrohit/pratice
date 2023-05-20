#include <bits/stdc++.h>
using namespace std;
class rec_{
public:
    int count=0;
    int toh(int n, int from ,int to, int aux){
        count+=1;
        if(n==1){
            cout<<"move the disk 1 from "<< from<<" to "<<to<<" "<<endl;
            return count;
        }
        toh(n-1,from,aux,to);
        cout<<"move the disk "<<n<< " from "<<to <<" to " << aux <<endl;
        toh(n-1,aux,to,from);
    }

};
int main(){
    int n;
    cin>>n;
    rec_ r;
    cout<<r.toh(n,1,3,2);
}