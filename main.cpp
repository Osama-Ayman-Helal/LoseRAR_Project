#include <iostream>
#include <string>
#include "src/core/FrequencyMap.h"
#include "src/core/HuffmanTree.h"
#include "src/io/BitWriter.h"
#include "src/io/HeaderManager.h"
// ... Include other headers

// TODO: Student 10 - Implement the high-level logic
void compressFile(const std::string& inputPath, const std::string& outputPath) {
    std::cout << "Compressing " << inputPath << "..." << std::endl;

    // 1. Frequency Analysis (S1)
    FrequencyMap fMap;
    auto freqs = fMap.buildFrequencyMap(inputPath);

    // 2. Build Tree (S2)
    HuffmanTree hTree;
    hTree.buildTree(freqs);
    auto codes = hTree.getCodes(); // (S3)

    // 3. Open Output File & Write Header (S6)
    std::ofstream outFile(outputPath, std::ios::binary);
    HeaderManager headerMgr;
    headerMgr.writeHeader(outFile, freqs);

    // 4. Encode and Write Body (S5 & S7)
    BitWriter bWriter(outFile);
    // ... Read input file again, lookup code in 'codes', write to bWriter

    bWriter.flush();
    outFile.close();
    std::cout << "Done!" << std::endl;
}

void decompressFile(const std::string& inputPath, const std::string& outputPath) {
    // TODO: Student 10 - Reverse the process
    // 1. Read Header (S6)
    // 2. Rebuild Tree (S2)
    // 3. Decode Body (S4)
}

int main(int argc, char* argv[]) {
    if (argc < 4) {
        std::cout << "Usage: ./minizip [flag] [input] [output]" << std::endl;
        std::cout << "Flags: -c (Compress), -x (Extract)" << std::endl;
        return 1;
    }

    std::string flag = argv[1];
    std::string input = argv[2];
    std::string output = argv[3];

    if (flag == "-c") {
        compressFile(input, output);
    } else if (flag == "-x") {
        decompressFile(input, output);
    } else {
        std::cout << "Unknown flag: " << flag << std::endl;
    }

    return 0;
}
