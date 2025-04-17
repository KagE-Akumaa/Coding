#include <unordered_map>
#include <string>
#include <memory>
using namespace std;
class Node{
    char data;
    unordered_map<char, shared_ptr<Node>>m;
    bool isTerminal;

public:
    Node(char d){
        this->data = d;
        isTerminal = false;
    }
    friend class Trie;
};

class Trie{
    shared_ptr<Node> root;
public:
    Trie(){
        root = make_shared<Node>('\0');
    }
    // insert function
    void insert(string word){
        shared_ptr<Node> temp = root;
        for(char ch: word){
            if(temp->m.count(ch)==0){
                // node does not exists create a new node
                shared_ptr<Node> n = make_shared<Node>(ch);
                temp->m[ch] = n;
            }
            temp = temp->m[ch];
        }
        temp->isTerminal = true;
    }

    // searching 
    bool search(string word){
        shared_ptr<Node> temp = root;
        for(char ch: word){
            if(temp->m.count(ch)==0){
                return false;
            }
            temp = temp->m[ch];
        }
        return temp->isTerminal;
    }
    bool isPrefix(string word){
        shared_ptr<Node> temp = root;
        for(char ch: word){
            if(temp->m.count(ch)==0)
                return false;
            temp = temp->m[ch];
        }
        return true;
    }
};