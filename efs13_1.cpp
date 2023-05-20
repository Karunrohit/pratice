#include <iostream>

using namespace std;
int main(){
    int num;
    cin>>num;
    int temp[num];
    int weight=500;
    for(int i=0;i<num;i++){
        cin>>temp[i];
    }
    int sum=0;
    for(int i=0;i<num;i++){
        sum=sum+temp[i];
        if(sum>500){
            cout<<i-1<<endl;
            return 0;
        }
    }
}