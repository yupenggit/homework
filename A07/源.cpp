#include <iostream>
int main() {
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	const double PI = 3.1416;
		double r, s, c;
		std::cout << "请输入圆形半径，按回车键结束: ";
		std::cin >> r;
		s = PI * r * r;
		c = PI * 2 * r;
		std::cout << std::endl;
		std::cout << "圆形周长：" << r << std::endl;
		std::cout << "圆形周长：" << c << std::endl;
		std::cout << "圆形面积：" << s << std::endl;
		std::cin.get();
		std::cin.get();
		return 0;
}
