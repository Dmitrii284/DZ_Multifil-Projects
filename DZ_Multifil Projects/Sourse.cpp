//#include<iostream>
#include "Products.h"




int main() {
	setlocale(LC_ALL, "Rus");
	
	product a { "Сумка", 36, 1800 };
	print_prod(a);	
	product b { "Туфли", 40, 5200 };
	print_prod(b);	
	product c { "Брюки", 20, 4000 };
	print_prod(c);
	std::cout << "|||||||||||||||||||||||||||||||||||||||||||" << std::endl;

	std::cout << "Общая стоимость первого товара:" << full_price(a) <<" Руб" << std::endl;
	std::cout << "Общая стоимость первого товара:" << full_price(b) << " Руб" << std::endl;
	std::cout << "Общая стоимость первого товара:" << full_price(c) << " Руб" << std::endl;
	std::cout << "|||||||||||||||||||||||||||||||||||||||||||" << std::endl;

	sell(a);
	sell(b);
	sell(c);

	return 0;
}