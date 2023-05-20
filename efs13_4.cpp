#include<bits/stdc++.h>
using namespace std;
#define ALPHABET_SIZE (26)
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')
class TrieNode{
public:
    TrieNode *children[ALPHABET_SIZE]={NULL};
    int len=-1;
};
void insert(struct TrieNode *root, string key)
{
    TrieNode *t=root;
    int l=0;
    for(auto i: key){
        if(t->children[CHAR_TO_INDEX(i)]==NULL)
            t->children[CHAR_TO_INDEX(i)]=new TrieNode;

        l++;
        t=t->children[CHAR_TO_INDEX(i)];
    }
    if(t->len==-1){
        t->len=l;
    }
}
int search(struct TrieNode *root, string key)
{
    TrieNode *t=root;
    int i;
    for(i=0;i<key.length();i++){
        if(t->children[CHAR_TO_INDEX(key[i])]==NULL)return 0;
        t=t->children[CHAR_TO_INDEX(key[i])];
    }

    for(int i=0;i<26;i++){
        if(t->children[i])
            return 0;
    }
    return t->len+1;
}

int main() {
    string s;
    getline(cin,s);
    string t;
    stringstream ss(s);
    TrieNode *root=new TrieNode;
    vector<string> v;
    while(ss>>t){
        reverse(t.begin(),t.end());
        insert(root,t);
        v.push_back(t);
    }
    int ans=0;
    for(auto i: v){
        ans+=search(root,i);
    }
    cout<<ans<<endl;


}