#pragma once
#include "Common.h"

class Decoder {
public:
    // TODO: Student 4 - Traverse the tree based on 'bit'
    // If 'bit' is '0', go left. If '1', go right.
    // If leaf is reached, return true and store char in result.
    // If not leaf, return false.
    bool decodeBit(Node* root, Node*& currentPosition, char bit, unsigned char& resultChar);
};
