#include <string>
#include "sha256.h"

#pragma once

class Checker
{
private:
	std::string w0;
	int t;

public:
	Checker(std::string w0, int t);
	bool Check(std::string wi, int i);
};