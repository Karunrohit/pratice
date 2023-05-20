#include<bits/stdc++.h>
using namespace std;
int square(int mid,int temp){

    if(mid*mid==temp){
        return 0;//one of the square roots is found
    }
    if(temp<mid*mid){
        return square(mid-1,temp);//reinitializing mid to lower mid (4,10) (3,10)
    }
    else{
        return temp-(mid*mid);//
    }
}
int main(){
    int number,num;//initialize the number and temp
    cin>>number;//input of the number
    num=number;//initializing the temp
    int count=0;//count function
    bool flag=true;
    while(flag){
        count++;//adding count
        num = square(sqrt(num),num);//customize
        if(num==0){
            flag=false;
        }
    }
    cout<<count;
}