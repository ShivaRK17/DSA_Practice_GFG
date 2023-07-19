#include<bits/stdc++.h>
using namespace std;

class TrieNode{
    public:
        TrieNode* child[26];
        bool isEnd;
        TrieNode(){
            isEnd = false;
            for(int i =0;i<26;i++){
                child[i] = NULL;
            }
        }
        void insert(TrieNode* root,string str){
            TrieNode* curr = root;
            for(int i = 0;i<str.length();i++){
                int index = str[i]-'a';
                if(curr->child[index]==NULL){
                    curr->child[index] = new TrieNode();
                }
                curr = curr->child[index];
            }
            curr->isEnd = true;
        }
        bool search(TrieNode* root,string str){
            TrieNode* curr = root;
            for(int i = 0;i<str.length();i++){
                int index = str[i]-'a';
                if(curr->child[index]==NULL){
                    return false;
                }
                else{
                    curr = curr->child[index];
                }
            }
            return curr->isEnd;
        }
};


int main(){
    TrieNode* Trie = new TrieNode();
    Trie->insert(Trie,"bad");
    Trie->insert(Trie,"bat");
    Trie->insert(Trie,"geek");
    cout<<Trie->search(Trie,"geeks");
    return 0;
}