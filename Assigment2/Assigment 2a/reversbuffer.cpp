/*Yakubovskaya Anastasya st130155@student.spbu.ru Zadacha2*/
#include "header.h"
#include <algorithm>

void reverseBuffer(char* buffer, std::uintmax_t fileSize) {
     std::reverse(buffer, buffer + fileSize);
}
