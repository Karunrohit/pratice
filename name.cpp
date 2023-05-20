#include<bits/stdc++.h>
using namespace std;
class greedy{
public:
    int answer(vector<int> coupon, vector<int> expiry,int n){
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;

        int count=0;
        for(int i=0;i<n;i++){
            q.push({expiry[i]+i,coupon[i]});
            while(q.size() && (q.top().first<i+1 || q.top().second==0)){
                q.pop();
            }
            if (q.size()){
                auto x = q.top();
                q.pop();
                x.second--;
                count++;
                if (x.second>0) q.push(x);

            }


        }
        int day=n+1;
        while (q.size()){
            while(q.size() && (q.top().first<day || q.top().second==0)){
                q.pop();
            }
            if (q.size()){
                auto x = q.top();
                q.pop();

                x.second--;
                count++;
                if (x.second>0) q.push(x);

            }
            day++;
        }

        return count;

    }

};
int main(){
    int num;
    cin>>num;
    vector<int> coupon;
    vector<int> expiry;
    greedy g;
    for(int i=0;i<num;i++){
        int temp;
        cin>>temp;
        coupon.push_back(temp);
    }
    for(int i=0;i<num;i++){
        int temp;
        cin>>temp;
        expiry.push_back(temp);
    }
    cout<< g.answer(coupon,expiry,num);

}

