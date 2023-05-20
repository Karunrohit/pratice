#include <bits/stdc++.h>
using namespace std;
int hours[4] = {1,2,4,8};
int minutes[6] = {1,2,4,8,16,32};



void backtrack(int h, int m, int num_on, int start, vector<string>& times) {
    if (num_on == 0) {
        times.push_back(to_string(h) + (m < 10 ? ":0" : ":") + to_string(m));
        return;
    }
    for (int i = start; i < 10; i++) {
        if (i < 4) {
            h += hours[i];
            if (h < 12)
                backtrack(h, m, num_on-1, i+1, times);
            h -= hours[i];
        } else {
            m += minutes[i-4];
            if (m < 60)
                backtrack(h, m, num_on-1, i+1, times);
            m -= minutes[i-4];
        }
    }
}
vector<string> readBinaryWatch(int num) {
    vector<string> res;
    backtrack(0, 0, num, 0, res);
    return res;
}
int main(){
    int num;
    cin>>num;
    vector<string> answer = readBinaryWatch(num);
    sort(answer.begin(), answer.end());
    cout<<"[";
    for (int i = 0; i < answer.size()-1; i++) {
        cout<<answer[i]<<", ";
    }
    cout<<answer[answer.size()-1]<<"]";
}