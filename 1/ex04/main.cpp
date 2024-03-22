#include <cstddef>
#include <fstream>
#include <iostream>

void sed(const std::string& filename, const std::string& s1, const std::string& s2) {
    std::ifstream inputFile(filename);
    if (!inputFile.is_open()) {
        std::cerr << "Could not open \"" << filename << "\"" << std::endl;
        return;
    }

    std::string outputFilename = filename + ".replace";
    std::ofstream outputFileStream(outputFilename);

    std::string line;
    while (std::getline(inputFile, line)) {
        std::string result;
        size_t pos = 0;
        size_t lastPos = 0;

        while ((pos = line.find(s1, lastPos)) != std::string::npos) {
            result += line.substr(lastPos, pos - lastPos);
            result += s2;
            lastPos = pos + s1.length();
        }
        result += line.substr(lastPos);

        outputFileStream << result << "\n";
    }
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << "<filename> <string1> <string2>" << std::endl;
        return 1;
    }

    sed(argv[1], argv[2], argv[3]);

    return 0;
}
