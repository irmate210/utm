#include <iostream>
#include <set>
#include <queue>
#include "Masini.h"
#include "CustomSet.h"


int main() {
	Masini m1("Mercedes", "W222", 120000);
	Masini m2("Lexus", "l460", 80000);
	Masini m3("Mazda", "CX5", 45000);
	Masini m4("BMW", "i3", 40000);
	Masini m5("BMW", "i8", 60000);
	Masini m6("Pontiac", "Solstice", 25000);
	Masini m7("Lada", "2120", 10000);
	Masini m8("Mercedes", "S550", 80000);

	CustomSet carSet;
	CustomSet result;
	queue<Masini> q, copy;

	carSet.AddElement(m1);
	carSet.AddElement(m2);
	carSet.AddElement(m3);
	carSet.AddElement(m5);
	carSet.AddElement(m8);

	cout << "1,2,3  Set|Sort|Print: \n";
	carSet.PrintDesc();
	cout << "\n4,5,6 Find|Place|Print:\n";
	string brand;
	cout << "Input brand:\n";
	cin >> brand;
	carSet.OutPut(q, brand);
	cout << "\n7,8 Sort|Print:\n";
	carSet.SortAscending();
	carSet.PrintAsc();
	cout << "\n\n";
	copy = q;
	while (copy.size()!=0) {
		Masini p = copy.front();
		cout << p;
		copy.pop();
	}
	cout << "\n9,10 Merge|Print: \n";
	for (auto obj : carSet.GetSet()) {
		result.AddElement(obj);
	}
	copy = q;
	while (copy.size() != 0) {
		Masini m = copy.front();
		result.AddElement(m);
		copy.pop();
	}

	result.PrintDesc();
	cout << "\n11. Count:\n" << "\nInput brand: \n";
	cin >> brand;
	cout << result.Count(brand) << "\n";


	cout << "\n12 Find:\n";
	int price;
	cout << "\nInput price: \n";
	cin >> price;
	result.OutPutPrice(price);
	system("pause");
	return 0;
}