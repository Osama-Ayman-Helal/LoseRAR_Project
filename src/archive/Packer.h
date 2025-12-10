#pragma once
#include <vector>
#include <string>

class Packer {
public:
    // TODO: Student 9 - Concatenate multiple files into one "blob"
    // Format: [FileNameLen][FileName][FileSize][Content]
    void packFiles(const std::vector<std::string>& files, const std::string& outputFile);

    // TODO: Student 9 - Reverse the process
    void unpackFiles(const std::string& inputFile, const std::string& outputDir);
};
