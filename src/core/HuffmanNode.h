#pragma once
#include <cstddef>

struct HuffmanNode {
    char character;
    int frequency;
    HuffmanNode *left;
    HuffmanNode *right;

    HuffmanNode(char c, int f)
        : character(c), frequency(f), left(nullptr), right(nullptr) {}
    HuffmanNode(char c, int f, HuffmanNode *left, HuffmanNode *right)
        : character(c), frequency(f), left(left), right(right) {}
};

struct CompareNode {
    bool operator()(HuffmanNode *l, HuffmanNode *r) {
        return l->frequency > r->frequency;
    }
};
