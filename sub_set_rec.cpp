//
// Created by User on 21/12/2021.
//
// { Driver Code Starts
//Initial Template for C++


// CPP program to generate power set
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
vector<string>sset;
void all_strings(string s, string curr, int i){
    if(i==0){
        sset.clear();
    }
    if(i==s.length() ){
        return sset.push_back(curr);
    }
    all_strings(s,curr,i+1);
    all_strings(s,curr+s[i],i+1);

    return;
}
//Function to return the lexicographically sorted power-set of the string.
vector <string> powerSet(string s)
{
    string current="";
    int i=0;
    all_strings(s,current,i);
    return sset;


}


// { Driver Code Starts.


// Driver code
int main()
{
        string s;
        cin>>s;//input string

        //calling powerSet() function
        vector<string> ans = powerSet(s);
        //sorting the result of the powerSet() function
        sort(ans.begin(),ans.end());
        //printing the result
        for(auto x:ans)
            cout<<x<<" ";
        cout<<endl;



    return 0;
}   // } Driver Code Ends