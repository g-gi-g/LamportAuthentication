#include <string>
#include "sha256.h"

#pragma once

class User
{
private:
	std::string w;
	int t;
	std::string w0;

public:
	User(std::string w, int t);
	std::string GetW0();
	std::string Calculate(int i);
	void Corrupt(std::string w);
};