#include "BitWriter.h"

BitWriter::BitWriter(std::ofstream& outStream) : outFile(outStream), buffer(0), bitCount(0) {}

void BitWriter::writeBit(int bit) {
    // TODO: Student 5 - Use bitwise operators (buffer = buffer | (bit << ...))
}

void BitWriter::writeBitString(const std::string& bitString) {
    for (char c : bitString) {
        writeBit(c - '0');
    }
}

void BitWriter::flush() {
    // TODO: Student 5 - Handle leftover bits
}
