#include <iostream>
#include <string>
#include "header.h"
using namespace std;
string name;
int main ()
{
	name = "World";
	Zadacha1();
	while (true) {
		cin >> name;
		Zadacha1();
		if (name == "exit"){
			break;
		}
	}
}
