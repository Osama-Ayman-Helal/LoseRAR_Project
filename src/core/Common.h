#pragma once
#include <cstddef> // for nullptr

// SHARED STRUCTURE
struct Node {
    unsigned char character;
    int frequency;
    Node *left;
    Node *right;

    Node(unsigned char c, int f) : character(c), frequency(f), left(nullptr), right(nullptr) {}
};

// SHARED COMPARATOR (For Priority Queue)
struct CompareNode {
    bool operator()(Node* l, Node* r) {
        // TODO: Student 2 - Check if this logic constructs a Min-Heap or Max-Heap
        return l->frequency > r->frequency; 
    }
};
