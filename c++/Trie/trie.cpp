#include "trie.h"
#include <iostream>

using namespace std;
int main(){
      Trie trie;

    // Test case 1: Insert and search for a word
    trie.insert("apple");
    cout << trie.search("apple") << endl;   // Expected: 1 (true)
    cout << trie.search("app") << endl;     // Expected: 0 (false)
    
    // Test case 2: Insert a prefix and check search
    trie.insert("app");
    cout << trie.search("app") << endl;     // Expected: 1 (true)

    // Test case 3: Check if prefix exists
    cout << trie.isPrefix("ap") << endl;  // Expected: 1 (true)
    cout << trie.isPrefix("banana") << endl; // Expected: 0 (false)

    // Test case 4: Insert and check different words
    trie.insert("banana");
    trie.insert("band");
    trie.insert("bat");
    cout << trie.search("banana") << endl;  // Expected: 1 (true)
    cout << trie.search("band") << endl;    // Expected: 1 (true)
    cout << trie.search("bat") << endl;     // Expected: 1 (true)
    cout << trie.search("bath") << endl;    // Expected: 0 (false)
}