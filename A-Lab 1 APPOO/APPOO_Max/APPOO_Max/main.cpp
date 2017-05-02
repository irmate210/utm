#include <iostream>
#include <set>
#include "Masini.h"
#include "CustomComparator.h"

using namespace std;

int main() {
	Masini m1("Mercedes", "W222", 120000);
	Masini m2("Lexus", "l460", 80000);
	Masini m3("Mazda", "CX5", 45000);
	Masini m4("BMW", "i3", 40000);
	Masini m5("BMW", "i8", 60000);
	Masini m6("Pontiac", "Solstice", 25000);
	Masini m7("Lada", "2120", 10000);

	multiset<Masini, CustomComparator> carSet1;
	multiset<Masini, CustomComparator> carSet2;

	carSet1.insert(m1);
	carSet1.insert(m2);
	carSet1.insert(m3);
	carSet1.insert(m5);

	cout << "1,2 Set and Print MultiSet:\n";
	for (Masini p : carSet1) {
		cout << p;
	}
	
	cout << "\n3 Remove an element:";
	cout << "\nInput index:\n";
	int index; cin >> index;
	multiset<Masini>::iterator localFrom = carSet1.begin();
	for (int i = 0; i < index - 1; i++)
		localFrom++;
	carSet1.erase(localFrom);

	cout << "\n4 Print with iterators:\n";
	for (auto obj : carSet1) {
		cout << obj;
	}

	cout << "\n5 Set second container:\n";
	carSet2.insert(m5);
	carSet2.insert(m6);
	for (auto obj : carSet2) {
		cout << obj;
	}

	cout << "\n6 Remove and copy from second: ";
	cout << "\nInput from,to:";
	auto begin = 0, n = 0;
	cin >> begin >> n;
	auto rangeBegin = carSet1.begin();
	auto rangeEnd = carSet1.begin();
	advance(rangeBegin, begin);
	advance(rangeEnd, n);
	carSet1.erase(rangeBegin, rangeEnd);

	for (auto obj : carSet2) {
		carSet1.insert(obj);
	}

	cout << "\n\n7 Print both:\n";
	for (auto obj : carSet1) {
		cout << obj;
	}

	cout << "\n\n";
	for (auto obj : carSet2) {
		cout << obj;
	}

	system("pause");
	return 0;
}