#include "Adapter.h"

Adapter::Adapter()
{
	id = "WFID000";
	intAdapt = "Undefined";
	price = 0;
	speed = 0;
}

Adapter::Adapter(string intAdapt, double price, double speed)
{
	counter++;
	id = "WFID" + to_string(counter / 100) + to_string(counter / 10 % 10) + to_string(counter % 10);
	this->intAdapt = intAdapt;
	this->price = price;
	this->speed = speed;
}

void Adapter::showInfo() const
{
	cout << "Id: " << id << endl;
	cout << "IntAdapt: " << intAdapt << endl;
	cout << "Price: " << price << endl;
	cout << "Speed: " << speed << endl;
}
