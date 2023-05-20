#include <bits/stdc++.h>
using namespace std;
#define a 26
// initializing trie structure
class trie{
public:
     trie *children[a]={NULL};//trie creation

};
void substring_insert(trie *root,string str){
    for(auto i:str){
        if(root->children[i-'a']==NULL){
            root->children[i-'a']=new trie;//creating  a new node
        }
        root=root->children[i-'a']; //adding the nodes subnodes
    }
}
int count(trie *root){

    if(!root)return 0; //base condition
    int c=0;
    for(int i=0 ; i<26 ; i++){
        if(root->children[i]!=NULL){
            c += 1 + count(root->children[i]); //adding the possible sub nodes
        }
    }
    return c;
}
int main(){
    string str;//string input initialization
    cin>>str;
    trie *root =new trie;//initializing a class object
    for(int i=0;i<str.length();i++){
        substring_insert(root, str.substr(i));//inserting substrings
    }
    int c = count(root);//calling the function for finding total no of possible substrings
    cout<< c <<endl;//giving output of the given strings subset
}