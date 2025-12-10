#pragma once
#include <fstream>
#include <string>

class BitWriter {
private:
    unsigned char buffer; // 8-bit accumulator
    int bitCount;         // How many bits are currently in buffer
    std::ofstream& outFile;

public:
    BitWriter(std::ofstream& outStream);

    // TODO: Student 5 - Add bit to buffer. If buffer full (8 bits), write to disk.
    void writeBit(int bit);

    // TODO: Student 5 - Loop through string and call writeBit
    void writeBitString(const std::string& bitString);

    // TODO: Student 5 - Pad remaining bits with 0s and write final byte
    void flush(); 
};
