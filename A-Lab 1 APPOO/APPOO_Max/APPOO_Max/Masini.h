#pragma once

#include <set>
#include <iterator>
#include <string>
#include <iostream>
#include <ostream>

using namespace std;

class Masini {
private:
	string brand;
	string model;
	double price;
public:
	Masini() {}
	Masini(string brand, string model, double price);
	friend ostream&operator << (ostream& out, Masini &obj);
	friend istream&operator >> (istream& in, Masini &obj);
	void setBrand(string brand);
	string getBrand();
	void setModel(string model);
	string getModel();
	void setPrice(double price);
	double getPrice() const;
	bool operator<(const Masini& obj) const;
};


Masini::Masini(string brand, string model, double price)
{
	this->brand = brand;
	this->model = model;
	this->price = price;
}

ostream&operator <<(ostream& out, Masini &obj)
{
	return out << "[Brand:" << obj.getBrand() << "|Model:" << obj.getModel() << "|Price:" << obj.getPrice() << "]\n";
}

istream&operator >> (istream& in, Masini &obj) {
	in >> obj.brand;
	in >> obj.model;
	in >> obj.price;
	return in;
}

void Masini::setBrand(string brand)
{
	this->brand = brand;
}

string Masini::getBrand()
{
	return brand;
}

void Masini::setModel(string model)
{
	this->model = model;
}

string Masini::getModel()
{
	return model;
}

void Masini::setPrice(double price)
{
	this->price = price;
}

double Masini::getPrice() const
{
	return price;
}

bool Masini::operator<(const Masini &obj) const
{
	return this->price < obj.price;
}