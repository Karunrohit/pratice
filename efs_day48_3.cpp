#include<bits/stdc++.h>
using namespace std;
class rec_{
public:
    int  solve(vector<int> answer,int sum,int i,int f){

        int add=sum+answer[i];
        int subi=sum-answer[i];

        if(add==f and i==answer.size()-1){
            return 1;
        }
        else if(subi==f and i==answer.size()-1) {
            return 1;
        }
        else if(i==answer.size()-1){
            return 0;
        }

        return solve(answer,add,i+1,f)+solve(answer,subi,i+1,f);
    }
};
int main(){
    int size,f;
    cin>>size>>f;
    vector<int> answer;
    for(int i=0;i<size;i++){
        int temp;
        cin>>temp;
        answer.push_back(temp);
    }

    rec_ r;

    cout<<r.solve(answer,0,0,f)<<endl;
}