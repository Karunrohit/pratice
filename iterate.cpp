#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s,a=" ",b=" ";
    int i,x,y;
    getline(cin,s);
    for(i=0;i<s.length();i++)
    {
        if(s[i]!=' ')
        {
            a=a+s[i];
        }
    }
    x=stoi(a);
    b=to_string(x+1);
    for(i=0;i<b.length();i++) {
        if(i==b.length()-1){
            cout<<b[i];
        }
        else
        cout << b[i] << " ";
    }
}
