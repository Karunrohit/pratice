#include<bits/stdc++.h>
using namespace std;
int main(){
    string val;
    cin>>val;
    bool for_0=0;
    bool for_1=0;
    bool for_8=0;
    int arr1[]={1111};
    int arr8[]={8888};
    int arr0_1[]={1001,1111};
    int arr0_8[]={8008,8888};
    int arr1_8[]={1111,1881,8118,8888};
    int arr0_1_8[]={1001,1111,1881,8008,8118,8888};
    for (int i = 0; i < val.size(); ++i) {
        if(val[i]=='0')
            for_0=1;
        if(val[i]=='1')
            for_1=1;
        if(val[i]=='8')
            for_8=1;
    }
    cout<<for_0<<" "<<for_1<<" "<<for_8<<endl;
    if(for_1){
        if(for_0){
            if(for_8){
                int size = sizeof(arr0_1_8)/sizeof(arr0_1_8[0]);
                for (int i = 0; i < size - 2; ++i) {
                    cout << arr0_1_8 << ",";
                }
                cout<<arr0_1_8[size-1];
            }
            else{
                int size = sizeof(arr0_1)/sizeof(arr0_1[0]);
                for (int i = 0; i < size - 2; ++i) {
                    cout << arr0_1 << ",";
                }
                cout<<arr0_1[size-1];
            }
        }
        else if(for_8){
            int size = sizeof(arr1_8)/sizeof(arr1_8[0]);
            for (int i = 0; i < size - 2; ++i) {
                cout << arr1_8 << ",";
            }
            cout<<arr1_8[size-1];
        }
        else{
        cout<<arr1[0];
            }
    }
    else if(for_8){
        if(for_0) {
            int size = sizeof(arr0_8) / sizeof(arr0_8[0]);
            for (int i = 0; i < size - 2; ++i) {
                cout << arr0_8 << ",";
            }
            cout << arr0_8[size - 1];
        }
        else
            cout<<arr8;
    }
    else
        cout<<-1;

}