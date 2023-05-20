#include <bits/stdc++.h>
using namespace std;
vector<int> dp(10001,-1);
int solution(int num){
  if(num==0){
      return 1;
  }
  if(num<0){
      return 0;
  }
  if(dp[num]!=-1){
      return dp[num];
  }
  else{
      return dp[num]=solution(num-1)+solution(num-2);
  }
}
int main(){
//    int num;
//    cin>>num;
//    cout<<solution(num)<<endl;

}