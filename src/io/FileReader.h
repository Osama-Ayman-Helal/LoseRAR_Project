#pragma once
#include <fstream>
#include <vector>
#include <string>

class FileReader {
public:
    // TODO: Student 7 - Read a block of bytes (e.g., 4096 bytes)
    bool readChunk(std::ifstream& inFile, std::vector<unsigned char>& buffer);

    // TODO: Student 7 - Get total file size using seekg/tellg
    long long getFileSize(const std::string& filePath);
};
