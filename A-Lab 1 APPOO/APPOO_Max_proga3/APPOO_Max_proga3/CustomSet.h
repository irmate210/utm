#pragma once
#include <set>
#include <iostream>
#include <string>
#include <queue>
#include "Masini.h"
#include "AscendingComparator.h"
#include "DescendingComaparator.h"

class CustomSet {
public:
	CustomSet();
	void PrintDesc();
	void PrintAsc();
	void AddElement(Masini &obj);
	multiset<Masini, AscendingComaparator> GetSet();
	multiset<Masini, AscendingComaparator> FindByBrand(string brand);
	void OutPut(queue<Masini> &out, string brand);
	void SortAscending();
	int Count(string brand);
	multiset<Masini, AscendingComaparator> FindByPrice(int price);
	void OutPutPrice(int price);
private:
	multiset<Masini, DescendingComparator> carSet;
	multiset<Masini, AscendingComaparator> result;
};

CustomSet::CustomSet() {
	//...
}

void CustomSet::PrintDesc() 
{
	for (auto obj : carSet) {
		cout << obj;
	}
}

void CustomSet::PrintAsc() {
	for (auto obj : result) {
		cout << obj;
	}
}

void CustomSet::AddElement(Masini &obj)
{
	carSet.insert(obj);
}

multiset<Masini, AscendingComaparator> CustomSet::GetSet() {
	return result;
}

multiset<Masini,AscendingComaparator> CustomSet::FindByBrand(string brand) 
{
	multiset<Masini, AscendingComaparator> result;
	for (auto obj : carSet) {
		if (obj.getBrand() == brand) {
			result.insert(obj);
		}
	}
		return result;
}

void CustomSet::OutPut(queue<Masini> &out, string brand) {
	multiset<Masini, AscendingComaparator> result = this->FindByBrand(brand);
	if (result.size() != 0) {
		cout << "\nFound:\n";
		for (auto obj : result) {
			cout << obj;
			out.push(obj);
		}
	}
	else {
		cout << "\nNothing Found!\n";
	}
}

void CustomSet::SortAscending() {
	for (auto obj : carSet) {
		result.insert(obj);
	}
}

int CustomSet::Count(string brand) {
	int result = 0;
	multiset<Masini, AscendingComaparator> temp = this->FindByBrand(brand);
	for (auto obj : temp) {
		result += 1;
	}
	return result;
}

multiset<Masini, AscendingComaparator> CustomSet::FindByPrice(int price)
{
	multiset<Masini, AscendingComaparator> result;
	for (auto obj : carSet) {
		if (obj.getPrice() >= price) {
			result.insert(obj);
		}
	}
	return result;
}

void CustomSet::OutPutPrice(int price) {
	multiset<Masini, AscendingComaparator> result = this->FindByPrice(price);
	if (result.size() != 0) {
		cout << "\nFound:\n";
		for (auto obj : result) {
			cout << obj;
		}
	}
	else {
		cout << "\nNothing Found!\n";
	}
}
