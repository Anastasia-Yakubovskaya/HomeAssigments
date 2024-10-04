#include <fstream>
#include <iostream>
#include <filesystem>
#include <algorithm>
int main() {
    std::ifstream infile;
    std::ofstream outfile;

    infile.open("Assigment2.txt", std::ios::binary);


    std::filesystem::path path("Assigment2.txt");
    std::uintmax_t fileSize = std::filesystem::file_size(path);

    char* buffer = new char[fileSize];

    infile.read(buffer, fileSize);
    outfile.open("Nov.txt",std::ios::binary|std::ios::out);
    std::reverse(buffer, buffer + fileSize);
    outfile.write(buffer, fileSize);

    delete[] buffer;


    infile.close();
    outfile.close();
    return 0;
}
