#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;//initializing string
    cin>>str;//input of the string
    string str2=str;//shallow copy of the string
    for (int i = 0; i < str.length(); i++) {
        int ind;//initializing temp
        cin>>ind;
        str2[ind]=str[i];//swapping of element positions
    }
    cout<<str2;//output
}







//#include <bits/stdc++.h>
//using namespace std;
//int main(){
//    string str;//initialize the input
//    getline(cin,str);//getting the input
//    map< int , char > m;//initializing the map
//    for(int i=0;i<str.size();i++){
//        int temp;//declaring temp
//        cin>>temp;
//        m.insert({temp,str[i]});//inserting the map
//    }
//
//    for(int i=0;i<str.size();i++){
//        cout<<m.at(i);//finding the particular value
//    }
//} //n.logn;