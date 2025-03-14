#include <iostream>
using namespace std;

// Trie Node structure
struct TrieNode {
    TrieNode* children[26];
    bool isEndOfWord;

    TrieNode() {
        isEndOfWord = false;
        for (int i = 0; i < 26; i++) {
            children[i] = nullptr;
        }
    }
};

// Function to insert a word into the Trie
void insertIntoTrie(TrieNode* root, string word) {
    TrieNode* curr = root;
    for (char c : word) {
        int index = c - 'a';
        if (!curr->children[index]) {
            curr->children[index] = new TrieNode();
        }
        curr = curr->children[index];
    }
    curr->isEndOfWord = true;
}

// Function to search for a word in the Trie
bool searchTrie(TrieNode* root, string word) {
    TrieNode* curr = root;
    for (char c : word) {
        int index = c - 'a';
        if (!curr->children[index]) {
            return false;
        }
        curr = curr->children[index];
    }
    return curr->isEndOfWord;
}

int main() {
    TrieNode* root = new TrieNode();

    // Insert words into Trie
    insertIntoTrie(root, "cover");
    insertIntoTrie(root, "car");
    insertIntoTrie(root, "care");
    insertIntoTrie(root, "snake");
    insertIntoTrie(root, "fivefoot");
    insertIntoTrie(root, "extremelywell");
    insertIntoTrie(root, "coward");
    insertIntoTrie(root, "selfobsessed");
    insertIntoTrie(root, "tag");
    insertIntoTrie(root, "take");
    insertIntoTrie(root, "took");
    // Additional words for testing
    insertIntoTrie(root, "trie");
    insertIntoTrie(root, "tree");
    insertIntoTrie(root, "track");
    insertIntoTrie(root, "trace");
    insertIntoTrie(root, "train");
    insertIntoTrie(root, "transfer");
    insertIntoTrie(root, "translate");
    insertIntoTrie(root, "transport");
    insertIntoTrie(root, "trust");
    insertIntoTrie(root, "trouble");
    insertIntoTrie(root, "trip");
    insertIntoTrie(root, "triumph");
    insertIntoTrie(root, "trophy");
    insertIntoTrie(root, "tropical");
    insertIntoTrie(root, "trick");
    insertIntoTrie(root, "trigger");
    insertIntoTrie(root, "trivial");

    // Search for a word
    string searchWord = "track";
    if (searchTrie(root, searchWord)) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }

    return 0;
}
