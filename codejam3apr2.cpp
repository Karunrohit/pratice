#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> matrix(4,vector<int>(3,0));
vector<int> answer(4,0);
int mini(int a,int b,int c){
    if (a <= b && a <= c) return a;

    else if (b <= a && b <= c) return b;

    else    return c;
}
bool print(){
    vector<int> temp;
    int sum=0;
    for(int i=0;i<4;i++){
        int tempo=mini(matrix[0][i],matrix[1][i],matrix[2][i]);
        temp.push_back(tempo);
        sum+=tempo;
    }
    if(sum<1000000) return false;
    int t=1000000;
    for(int i=0;i<4;i++){
        if(t-temp[i]>0){
            answer[i]=temp[i];
            t-=temp[i];
        }
        else if(t-temp[i]<0 and t==0){
            answer[i]=0;
        }
        else{
            answer[i]=t;
            t=0;
        }

    }
    return 1;

}
int main(){
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        for(int i=0;i<3;i++){
            for(int j=0;j<4;j++){
                int temp;
                cin>>temp;
                matrix[i][j]=temp;
            }
        }
        cout<<"Case #"<<i+1<<":"<<" ";
        if(print()){
               for(int i=0;i<4;i++){
                     cout<<answer[i]<<" ";
                 }
            cout<<endl;
        }
        else    cout<<"IMPOSSIBLE"<<endl;


    }
}