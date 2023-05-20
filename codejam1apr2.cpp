#include<bits/stdc++.h>
using namespace std;
void print(int n1, int n2){
    for(int i=0;i<=(n1*2);i++){
        for(int j=0;j<=(n2*2);j++){
            if((i==0 or i==1) and (j==0 or j==1)){
                cout<<".";
            }
            else{
                if(i%2==0){
                    if(j%2==0){
                        cout<<"+";
                    }
                    else{
                        cout<<"-";
                    }
                }
                else{
                    if(j%2==0){
                        cout<<"|";
                    }
                    else{
                        cout<<".";
                    }
                }
            }
        }
        cout<<endl;
    }
}
int main(){
    int n1;
    cin>>n1;
    int arr[n1][2];
    for(int i=0;i<n1;i++){
        int temp1,temp2;
        cin>>temp1>>temp2;
        arr[i][0]=temp1;
        arr[i][1]=temp2;
    }
    for(int i=0;i<n1;i++){
        cout<<"Case #"<<i+1<<":"<<endl;
        print(arr[i][0],arr[i][1]);
    }
}