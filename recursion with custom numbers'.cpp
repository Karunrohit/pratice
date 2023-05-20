//
// Created by User on 26/12/2021.

#include<bits/stdc++.h>
using namespace std;
int num;//global variable
void numbers(int i,int number,int n){
    //base condition
    if(num<n+i){
        return;//returning void
    }
    n=n+i;//adding i for printing the particular list
    cout<<n<<" ";//output
    numbers(i,number-i,n);//recursion implementation

}

int main(){
    cout<<"enter the list/vector/array:  "<<endl;
    cin>>num;//giving a value to the particular variable

    for (int i = 1; i < num; i++) {
        numbers(i,num,0);//calling the function
        cout<<endl;//after returning of the function ending the particular output line
    }
    return 0;
}