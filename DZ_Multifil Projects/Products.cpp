
#include "Products.h"
//#include<iostream>

void print_prod(const product& P) {
	std::cout << "Название товара: " << P.name << std::endl;
	std::cout << "Количество товара: " << P.namber << " Шт" << std::endl;
	std::cout << "Стоимость товара: " << P.price <<" rub"<< std::endl;
	std::cout << "--------------------------------\n" << std::endl;
};
double full_price(const product& P) {
	return (P.namber * P.price);
}
 
void sell(const product& P) {
	std::cout << "Название товара: " << P.name << std::endl;
	std::cout << "Количество товара: " << P.namber << " Шт" << std::endl;
	std::cout << "Начальная стоимость товара: " << P.price << " rub" << std::endl;
	std::cout << "Сколько хотите купить? - > ";
	int num;
	std::cin >> num;
	std::cout << "--------------------------------\n";
	std::cout <<"Товаров - " << P.name << " осталось: " << P.namber - num<< "Шт" <<
		"\nЕго остаточная стоимость: " << (P.namber - num) * P.price << " Руб" << std::endl;
	std::cout << "|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
}