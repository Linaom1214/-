#include "Person.h"
Person::Person(string name, string number)
{
	this->name = name;
	this->number = number;
}
void Person::show_info() const
{
	cout << "������ " << this->name << " ����: "<<this->number << endl;
}