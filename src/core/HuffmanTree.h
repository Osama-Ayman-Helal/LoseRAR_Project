#pragma once
#include "Common.h"
#include <unordered_map>
#include <string>
#include <vector>

class HuffmanTree {
private:
    Node* root;

    // TODO: Student 3 - Implement DFS recursion here
    void generateCodesHelper(Node* node, std::string currentCode, std::unordered_map<unsigned char, std::string>& codes);

    // Helper to clear memory
    void deleteTree(Node* node);

public:
    HuffmanTree();
    ~HuffmanTree();

    // TODO: Student 2 - Implement the Min-Heap logic here
    void buildTree(const std::unordered_map<unsigned char, int>& freqMap);

    // TODO: Student 3 - Validates tree exists and calls helper
    std::unordered_map<unsigned char, std::string> getCodes();

    Node* getRoot() const; // Getter for Student 6 (Header) and Student 4 (Decoder)
};
