#include<bits/stdc++.h>
using namespace std;
//int upper_bounds(vector<int> ar,int k)
//{
//    int s=0;
//    int e=ar.size();
//    while (s !=e) {
//        int mid = s+e>>1;
//        if (ar[mid] <=k) {
//         s=mid+1;
//        }
//        else{
//            e=mid;
//        }
//    }
//    if(s==ar.size()) return -1;
//
//return s;
//}
int solution(vector<int> &days,vector<int> &price, vector<int> &dp,int f_date){
    if(days.back()<=f_date){
        return 0;
    }
    if(dp[f_date]!=-1){
        return dp[f_date];
    }
    int u_bound= *upper_bound(days.begin(),days.end(),f_date);
        int c1=price[0]+ solution(days,price,dp,u_bound);
        int c2=price[1]+ solution(days,price,dp,u_bound+6);
        int c3=price[2]+ solution(days,price,dp,u_bound+29);
        return dp[f_date] = min({c1,c2,c3});

}
int solve(vector<int> &days,vector<int> &price){
    vector<int> dp(days.back(),-1);
    return solution(days,price,dp,0);
}
vector<int> tokenize(const string& str){
    vector<int> tokens;
    //create a string stream object
    //and initialize with our input
    stringstream ss(str);
    string token;
    //read from string stream object ss
    //and stores it in token with spaces
    while(getline(ss,token,' ')){
        tokens.push_back(stoi(token));
    }
    return tokens;
}
int main(){
    string s1,s2;
    getline(cin,s1);
    vector<int> days =tokenize(s1);
    getline(cin,s2);
    vector<int> price= tokenize(s2);
    cout<<solve(days,price);
}