#include "header.h"
#include <algorithm>

void reverseBuffer(char* buffer, std::uintmax_t fileSize) {
     std::reverse(buffer, buffer + fileSize);
}
