#include <iostream>
int main() {
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	const double PI = 3.1416;
		double r, s, c;
		std::cout << "������Բ�ΰ뾶�����س�������: ";
		std::cin >> r;
		s = PI * r * r;
		c = PI * 2 * r;
		std::cout << std::endl;
		std::cout << "Բ���ܳ���" << r << std::endl;
		std::cout << "Բ���ܳ���" << c << std::endl;
		std::cout << "Բ�������" << s << std::endl;
		std::cin.get();
		std::cin.get();
		return 0;
}
