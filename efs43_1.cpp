#include <bits/stdc++.h>
using namespace std;
struct color{int r,g,b;};
class math{
public:
    int answer(vector<vector<int>> &ans,int r,int c,int k){
        int mean=0;
        for(int i=0;i<r;i++){
            for (int j = 0; j < c; j++) {
                mean+=ans[i][j];
            }
        }
        mean/=r;
        mean/=c;
        int count=0;
        for(int i=0;i<r;i++){
            for (int j = 0; j < c; j++) {
                if(abs(mean-ans[i][j])%k!=0){
                    return -1;
                }
                else{
                    count+=abs(mean-ans[i][j])/k;
                }
            }
        }
    }
};
int main(){
    int r,c,cap;
    cin>>r>>c>>cap;
    vector<vector<int>> ans(r,vector<int>(c,0));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int temp;
            cin>>temp;
            ans[i][j]=temp;
        }
    }
    math m;
    m.answer(ans,r,c,cap);

}