//
// Created by User on 19/12/2021.
//
#include <bits/stdc++.h>
using namespace std;
int sum=0;
int digitalRoot(int n)
{
    //Your code here.

    if(n==0 && sum <= 9)
        return sum;
    else if(n==0 && sum>9){
//        cout << n << " " << sum << endl;
        n = sum;
        sum = 0;
        return digitalRoot(n);
    }
    else{
        sum+=n%10;
        return digitalRoot((int)n/10);
    }
}
int main(){
    int num;
    cin>>num;
    cout<<digitalRoot(num);
}