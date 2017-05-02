#pragma once
#include "Masini.h"

class DescendingComparator {
public:
	bool operator()(const Masini& obj1, const Masini& obj2) {
		return obj1.getPrice() > obj2.getPrice();
	}
};
