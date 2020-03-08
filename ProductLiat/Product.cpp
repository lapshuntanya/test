#include "Product.h"



Product::Product()
{
	name = "�������";
	price = 100;
	made = Date()-10;
	days = 30;
}

Product::Product(string name, float price, Date made, int days)
{
	this->name = name;
	this->price = price;
	this->days = days;
	this->made = made;
}


Product::~Product()
{
}

void Product::setName(string name)
{
	this->name = name;
}

string Product::getName()
{
	return name;
}

void Product::setPrice(float price)
{
	this->price = price;
}

float Product::getPrice()
{
	return price;
}

void Product::setDate(Date date)
{
	this->made = date;
}

Date Product::getDate()
{
	return made;
}

void Product::setDays(int days)
{
	this->days = days;
}

int Product::getDays()
{
	return days;
}

bool Product::isExpired()
{
	return made + days < Date();
}

bool Product::operator==(Product & obj)
{
	return this->name == obj.name;
}

ostream & operator<<(ostream & out, Product & obj)
{
	out << "��������: " << obj.name << endl;
	out << "����: " << obj.price << endl;
	out << "���� ������������: " << obj.made << endl;
	out << "���� ��������: " << obj.days << endl;
	return out;
	// TODO: insert return statement here
}
