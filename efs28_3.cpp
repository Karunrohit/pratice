#include<bits/stdc++.h>
using namespace std;

bool is_true(int fc, int sc, int required) {
    if(fc + sc < required)
        return false;
    if(fc == required || sc == required || fc + sc == required)
        return true;
    return required % __gcd(fc, sc) == 0;
}
int main(){
    int fc,sc,required;
    int s=sqrt(5);
    cin>>fc>>sc>>required;
    bool ans=is_true(fc,sc,required);
    if(ans){
        cout<<"true";
        return 0;
    }
    cout<<"false";


}