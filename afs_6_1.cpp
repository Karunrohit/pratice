//
// Created by User on 20/12/2021.
//
#include <bits/stdc++.h>

using namespace std;
int main(){
    int r,c,n;
    cin>>r>>c>>n;
    int arr[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
           if(i+n<r){
               cout<<arr[i+n][j];
           }
           if(j-s)
        }
    }

}