//
// Created by User on 16/12/2021.
//
#include <bits/stdc++.h>
int sumOfDigits(int n)
{
    int sum=0;
    if(n<=9){
        return sum+n;
    }
    sum+= n%10;
    sumOfDigits(n/10);
}
using namespace std;
int main(){
    int num;
    cin>>num;
    sumOfDigits(num);
}