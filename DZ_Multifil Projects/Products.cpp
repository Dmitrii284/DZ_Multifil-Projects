
#include "Products.h"
//#include<iostream>

void print_prod(const product& P) {
	std::cout << "�������� ������: " << P.name << std::endl;
	std::cout << "���������� ������: " << P.namber << " ��" << std::endl;
	std::cout << "��������� ������: " << P.price <<" rub"<< std::endl;
	std::cout << "--------------------------------\n" << std::endl;
};
double full_price(const product& P) {
	return (P.namber * P.price);
}
 
void sell(const product& P) {
	std::cout << "�������� ������: " << P.name << std::endl;
	std::cout << "���������� ������: " << P.namber << " ��" << std::endl;
	std::cout << "��������� ��������� ������: " << P.price << " rub" << std::endl;
	std::cout << "������� ������ ������? - > ";
	int num;
	std::cin >> num;
	std::cout << "--------------------------------\n";
	std::cout <<"������� - " << P.name << " ��������: " << P.namber - num<< "��" <<
		"\n��� ���������� ���������: " << (P.namber - num) * P.price << " ���" << std::endl;
	std::cout << "|||||||||||||||||||||||||||||||||||||||||||" << std::endl;
}