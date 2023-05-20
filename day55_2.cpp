#include<bits/stdc++.h>
using namespace std;
int getOlympiadTeams(vector<int>& student Rating) {
    int n = studentRating.size();
    int teamCount = 0;
    for (int i = 0; i < n; i++) {
        int leftLarger = 0, leftSmaller = 0, rightLarger = 0, rightSmaller = 0;
        //left of i
        for (int j = 0; j < i; j++)
            if (studentRating[j] < studentRating[i])
                leftSmaller++;
            else if (studentRating[j] > studentRating[i])
                leftLarger++;
        //right of i
        for (int j = i + 1; j < n; j++)
            if (studentRating[j] > studentRating[i])
                rightLarger++;
            else if (studentRating[j] < studentRating[i])
                rightSmaller++;

        teamCount += (leftSmaller * rightLarger) + (leftLarger * rightSmaller);
    }
    return teamCount;
}
int main(){
    int n;
    cin >> n;
    vector<int> studentRating;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        studentRating.push_back(temp);
    }
    cout << getOlympiadTeams(studentRating);
}