#include "Huffman.h"
#include <iostream>

int main() {
    std::string original = "ABRACADABRA";

    // Encode
    auto [encoded, frequencies] = encodeString(original);
    std::cout << "Original: " << original << '\n';
    std::cout << "Encoded: " << encoded << '\n';

    // Decode
    std::string decoded = decodedString(encoded, frequencies);
    std::cout << "Decoded: " << decoded << '\n';

    return 0;
}