#include "User.h"

User::User(std::string w, int t)
{
	this->w = w;
	this->t = t;
	w0 = w;
	for (int i = 0; i < t; i++) w0 = sha256(w0);
}

std::string User::GetW0() { return w0; }

std::string User::Calculate(int i) 
{
	std::string wi = w;
	for (int j = 0; j < t - i; j++) wi = sha256(wi);
	return wi;
}

void User::Corrupt(std::string w)
{
	this->w = w;
}
