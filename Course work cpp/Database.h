#pragma once
#include <fstream>
#include <string>
#include <iostream>
using namespace std;
class Database
{
public:
	Database();
	void PrintTypes();
	friend ostream& operator<<(ostream& os, Database& ex)
	{
		os << "�����i�� ��� �����i���" << endl;
		cout << "_________________________________________________________________________________________________________________" << endl;
		return os;
	}

	~Database();
};

