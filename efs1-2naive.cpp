//
// Created by User on 22/12/2021.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    bool arr[num-1][num-1];
    for (int i = 0; i < num; i++) {
        for(int j=0; j<num;j++){
            cin>>arr[i][j];
        }
    }
    int count=0;
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            if (!arr[i][j]) {
                if (!arr[j][i]) {
                    cout << i << " " << j << endl;
                    count++;
                    i++;
                    j++;
                }
            }
        }
        cout<<i<<endl;
    }
    cout<<count;
}