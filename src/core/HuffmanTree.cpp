#include "HuffmanTree.h"
#include <queue>

HuffmanTree::HuffmanTree() : root(nullptr) {}

HuffmanTree::~HuffmanTree() {
    deleteTree(root);
}

void HuffmanTree::deleteTree(Node* node) {
    // TODO: Student 2 - Recursive deletion to prevent memory leaks
}

void HuffmanTree::buildTree(const std::unordered_map<unsigned char, int>& freqMap) {
    std::priority_queue<Node*, std::vector<Node*>, CompareNode> pq;
    // TODO: Student 2 - Push all leaf nodes into PQ
    // TODO: Student 2 - Loop: pop two, merge, push back, until 1 remains
}

void HuffmanTree::generateCodesHelper(Node* node, std::string currentCode, std::unordered_map<unsigned char, std::string>& codes) {
    // TODO: Student 3 - If leaf, map[char] = currentCode
    // TODO: Student 3 - Else, recurse left (code + "0") and right (code + "1")
}

std::unordered_map<unsigned char, std::string> HuffmanTree::getCodes() {
    std::unordered_map<unsigned char, std::string> codes;
    if (root) {
        generateCodesHelper(root, "", codes);
    }
    return codes;
}

Node* HuffmanTree::getRoot() const {
    return root;
}
