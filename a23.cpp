//
// Created by User on 23/01/2022.
//
#include <bits/stdc++.h>

using namespace std;
int main(){
    int N;
    string arr[6]={"geekf", "geeks", "or","keeg", "abc",
                "bc"};
for(int i=0;i<N;i++){
for(int j=0;j<N;j++){
if(i==j){
continue;
}
else{
string temp1="";
temp1+=arr[i]+arr[j];
string temp2="";
temp2+=arr[i]+arr[j];
reverse(temp1,temp2);
if(temp1==temp2)
cout<< "1";
}
}
}
cout<<"0";
}
