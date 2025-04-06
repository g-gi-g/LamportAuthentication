#include <iostream>
#include "User.h"
#include "Checker.h"

int main()
{
	// ��������� �������
	int t = 100;
	std::string w = "111";
	User A(w, t);
	Checker B(A.GetW0(), t);
	bool isAuthentificated;
	std::string wi;
	for (int i = 1; i < t; ++i)
	{
		isAuthentificated = B.Check(A.Calculate(i), i);
		if (!isAuthentificated) 
		{
			std::cout << "Authentification failed" << std::endl;
			break;
		}
	}
	if (isAuthentificated) std::cout << "Authentification succeeded" << std::endl;

	// ����� ��������� w, ��� ��������� ���������� ������ ���������

	A.Corrupt("1111");
	for (int i = 1; i < t; ++i)
	{
		isAuthentificated = B.Check(A.Calculate(i), i);
		if (!isAuthentificated)
		{
			std::cout << "Authentification failed" << std::endl;
			break;
		}
	}
	if (isAuthentificated) std::cout << "Authentification succeeded" << std::endl;
}