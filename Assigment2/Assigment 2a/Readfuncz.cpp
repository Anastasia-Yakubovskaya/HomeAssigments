#include <fstream>
#include <iostream>
#include <filesystem>
#include <algorithm>

void readFile(const std::string& filename, char*& buffer, std::uintmax_t& fileSize) {
    std::ifstream infile(filename, std::ios::binary);
    
    std::filesystem::path path(filename);
    fileSize = std::filesystem::file_size(path);

    buffer = new char[fileSize];

    infile.read(buffer, fileSize);


    infile.close();
}


void writeFile(const std::string& filename, char* buffer, std::uintmax_t fileSize){
    std::ofstream outfile(filename, std::ios::binary | std::ios::out);

    outfile.write(buffer, fileSize);
    outfile.close();
}
