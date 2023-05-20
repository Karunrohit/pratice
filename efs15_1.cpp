#include <bits/stdc++.h>
using namespace std;
class Trie{
public:
    Trie *children[26]={NULL};
    bool isleaf= false;
};
void insert(struct Trie *root, string key)
{
    Trie *t=root;
    for(auto i: key){
        if(t->children[i-'a']==NULL){
            t->children[i-'a']=new Trie;
        }
        t=t->children[i-'a'];
    }
    t->isleaf=true;
}

//Function to use TRIE data structure and search the given string.
string search(struct Trie *root, string key)
{
    Trie *t=root;
    int i;
    string s="";
    for(i=0;i<key.length();i++){
        if((t->children)==NULL)return key;
        if(t->isleaf) return s;
        t=t->children[key[i]-'a'];
        s+=key[i];
    }

    return  s;

}
vector<string> tokenize(const string& str){
    vector<string> tokens;
    stringstream ss(str);
    string token;
    while(getline(ss,token,' ')){
        tokens.push_back(token);
    }
    return tokens;
}
int main(){
    Trie *root=new Trie;
    string temp1,temp2;
    getline(cin,temp1);
    getline(cin,temp2);
    vector<string> arr1= tokenize(temp1);
    vector<string> arr2= tokenize(temp2);
    for(auto &i:arr1){
        insert(root,i);
    }
    for(auto &i:arr2){
        cout<<search(root,i)<<" ";
    }

}
