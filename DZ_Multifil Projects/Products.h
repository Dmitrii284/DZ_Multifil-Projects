#pragma once
#include <iostream>

struct product {
	std::string name;
	int namber = 0;
	unsigned price = 0;					
};

void print_prod(const product& P);
double full_price(const product& P);
void sell(const product& P);