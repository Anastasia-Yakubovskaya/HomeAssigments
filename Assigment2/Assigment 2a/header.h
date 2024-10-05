#ifndef HEADER_H
#define HEADER_H

#include <cstdint>
#include <string>

void readFile(const std::string& filename, char*& buffer, std::uintmax_t& fileSize);
void reverseBuffer(char* buffer, std::uintmax_t fileSize);
void writeFile(const std::string& filename, char* buffer, std::uintmax_t fileSize);

#endif // HEADER_H
