//#include<iostream>
#include "Products.h"




int main() {
	setlocale(LC_ALL, "Rus");
	
	product a { "�����", 36, 1800 };
	print_prod(a);	
	product b { "�����", 40, 5200 };
	print_prod(b);	
	product c { "�����", 20, 4000 };
	print_prod(c);
	std::cout << "|||||||||||||||||||||||||||||||||||||||||||" << std::endl;

	std::cout << "����� ��������� ������� ������:" << full_price(a) <<" ���" << std::endl;
	std::cout << "����� ��������� ������� ������:" << full_price(b) << " ���" << std::endl;
	std::cout << "����� ��������� ������� ������:" << full_price(c) << " ���" << std::endl;
	std::cout << "|||||||||||||||||||||||||||||||||||||||||||" << std::endl;

	sell(a);
	sell(b);
	sell(c);

	return 0;
}