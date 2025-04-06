#include "Checker.h"

Checker::Checker(std::string w0, int t)
{
	this->w0 = w0;
	this->t = t;
}

bool Checker::Check(std::string wi, int i) 
{
	for (int j = 0; j < i; ++j) wi = sha256(wi);

	if (w0 == wi) return true;
	else return false;
}