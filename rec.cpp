//
// Created by User on 28/12/2021.
//
#include <bits/stdc++.h>

using namespace std;
class Solution
{
    string getNumString(int n) {
        switch(n) {
            case 0: return "";
            case 1: return "";
            case 2: return "abc";
            case 3: return "def";
            case 4: return "ghi";
            case 5: return "jkl";
            case 6: return "mno";
            case 7: return "pqrs";
            case 8: return "tuv";
            case 9: return "wxyz";
        }
    }

public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string> output;
    vector<string> possibleWords(int a[], int N){
        if(N == 0){
            return output;
        }
        for(int i=0;i<getNumString(N-1).size();i++){
            vector<string> temp = possibleWords(a, N-1);
            output.insert(output.end(),temp.begin(),temp.end());+

        }
    }
};
int