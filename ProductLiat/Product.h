#pragma once
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;
class Product
{
protected:
	string name;
	float price;
	Date made;
	int days;
public:
	Product();
	Product(string name, float price, Date made, int days);
	~Product();

	void setName(string name);
	string getName();
	void setPrice(float price);
	float getPrice();
	void setDate(Date date);
	Date getDate();
	void setDays(int days);
	int getDays();

	bool isExpired();
	friend ostream&operator <<(ostream&out, Product &obj);
	bool operator ==(Product &obj);
};

