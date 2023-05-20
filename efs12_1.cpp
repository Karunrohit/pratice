#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;//string initialization
    getline(cin,str);//string input
    stack<char> s;//stack initialization
    s.push(str[0]);//aadding first element of the string
    for (int i = 1; i < str.size(); ++i) {
        if(s.top() == '{' and str[i]=='}'){
            s.pop();//if satisfies the requirement
        }
        else if(s.top() == '[' and str[i]==']'){
                s.pop();//if satisfies the requirement
            }
        else if(s.top() == '(' and str[i]==')'){
                s.pop();//if satisfies the requirement
            }
        else{
            s.push(str[i]);//else
        }
    }
    if(s.empty()){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}

