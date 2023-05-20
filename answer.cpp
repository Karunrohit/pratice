#include <bits/stdc++.h>
using namespace std;
int main(){
    int ans;
    cin>>ans;
    if(ans<=0){
        cout<<"-1";
        return 0;
    }
    int i=0;
    int num=ans;

    while(num%3!=0 or i%5!=0){

        i++;
        num--;
    }
    if(num%3==0 and i%5==0) {
        if ((num * 5 + i * 3) > (ans-ans%3)*5 {
            string s = "";
            for (int j = 0; j < num; j++) {
                s += "5";
            }
            for (int j = 0; j < i; j++) {
                s += "3";
            }
            cout << s;
        }
        else{
            string s= "";
            for(int j=0;j<(ans-ans%3);j++){
                s+="5";
            }
            cout<<s;
        }
    }
    else{
        cout<<"-1";
    }
}

