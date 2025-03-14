#include<iostream>
#include<unordered_map>
using namespace std;


class TrieNode {
public:
    char value;
    unordered_map<char, TrieNode*> children;
    bool isTerminal;

    TrieNode(char data) {
        value = data;
        isTerminal = false; 
    }
};

void insertIntoTrie(TrieNode* root, string word) {
    // base case
    if(word.length() == 0){
        root->isTerminal = true;
        return;
    }

    char ch  = word[0];
    TrieNode* child;

    // present h toh wha chale jao
    // absent h toh create kardo
    if(root->children.count(ch) == 1){
        child = root->children[ch];
    } 
    else{
        child = new TrieNode(ch);
        root->children[ch] = child;
    }

    insertIntoTrie(child, word.substr(1));  // <-- semicolon added here
}

int main() {
    TrieNode* root = new TrieNode('_');
    insertIntoTrie(root, "cover");

    cout << "Word inserted yeah so successfully!" << endl;

    return 0;
}
