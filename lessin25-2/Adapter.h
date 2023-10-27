#pragma once
#include <iostream>
#include <string>
using namespace std;

class Adapter
{
	string id;
	string intAdapt;
	double price;
	double speed;
	static int counter;

public:
	Adapter();
	Adapter(string intAdapt, double price, double speed);

	void showInfo()const;

};

