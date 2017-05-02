#include <iostream>
#include <mi.h>
#include <set>
#include <queue>
#include <iterator>
#include <string>
#include "Header.h"


using namespace std;


int main() {

	multiset<char> first; //name and char
	multiset<char>::iterator it;
	multiset<Masini*> car;

	multiset<char> second;
	//car.insert(new Masini("Lexus", "l460", 50000));
	//car.insert(new Masini("Mercedes", "s550", 100000));
	for (auto &obj : car)
	{
		cout << *obj;
	}

	cout << "Introduceti cite caractere vreti: ";
	int numar;
	cin >> numar;
	system("cls");
	cout << "Introduceti caracterele: \n";
	for (int i = 0; i < numar; i++)
	{
		cout << "Caracter " << i + 1 << " ";
		char c;
		cin >> c;
		first.insert(c);

	}
	system("cls");
	cout << "Afisarea\n";
	for (auto &i : first)
	{
		cout << i << " ";
	}
	cout << "\nAlegeti elementul pentru stergere: ";
	char element;
	cin >> element;

	it = first.begin();
	it++;
	first.erase(element);
	system("cls");
	cout << "Scriti elementul pentru inserare: ";
	char new_elem;
	cin >> new_elem;
	first.insert(new_elem);

	cout << "\nAfisarea elementelor prin iterator\n";
	for (multiset<char>::iterator it = first.begin(); it != first.end(); it++)
	{
		cout << *it << " ";
	}
	system("pause");
	system("cls");
	cout << "Container 2: \n";
	for (int i = 0; i < numar; i++)
	{
		cout << "Caracter " << i + 1 << " ";
		char c;
		cin >> c;
		second.insert(c);

	}
	system("cls");
	cout << "Afisarea 2 container\n";
	for (auto &i : second)
	{
		cout << i << " ";
	}
	cout << "\n";
	system("pause");

	cout << "Afisarea 1 container\n";
	for (auto &i : first)
	{
		cout << i << " ";
	}
	cout << "\n";

	cout << "Introduceti elementul pentru stergere din primul container: ";
	char el_dorit;
	cin >> el_dorit;

	it = first.find(el_dorit);
	first.erase(it, first.end());

	for (auto &i : first)
	{
		cout << i << " ";
	}

	cout << "\n\n";
	system("pause");
	system("cls");
	cout << "Adaugam al doilea container la primu\n";
	char * p;
	p = first.get_allocator().allocate(10);

	first.insert(second.begin(), second.end());


	for (auto &i : first)
	{
		cout << i << " ";
	}
	system("pause");
	cout << "Afisarea 1 container: \n";
	for (auto &i : first)
	{
		cout << i << " ";
	}
	cout << "\nAfisarea 2 container: \n";
	for (auto &i : second)
	{
		cout << i << " ";
	}

	cout << "\n\nSfirsitul primului program\n";
	system("pause");
	system("cls");

	// doilea program



	//main2();
	return 0;
}