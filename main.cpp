#include <iostream>
void testZhiZhen();

int main(int argc, char** argv)
{
	testZhiZhen();
	return 0;
}


void testZhiZhen() {

	int x = 100;
	int y = 200;
	int* p, * q;
	p = &x;
	q = &y;
	std::cout << "x，y数值未交换之前的值为" << std::endl;
	std::cout << "x的值为:" << x << std::endl;
	std::cout << "y的值为:" << y << std::endl;
	std::cout << "x地址为:" << &x << std::endl;
	std::cout << "p的值为:" << p << std::endl;
	std::cout << "y地址为:" << &y << std::endl;
	std::cout << "q的值为:" << q << std::endl;
	std::cout << "*p的值为:" << *p << std::endl;
	std::cout << "*q的值为:" << *q << std::endl;
	//交换值,通过指针,所以如果需要交换两个数值，在C++中需要使用指针才能进行交换
	*p = 200;
	*q = 100;
	std::cout << "x，y数值交换之后的值:" << std::endl;
	std::cout << "x的值为:" << x << std::endl;
	std::cout << "y的值为:" << y << std::endl;
	std::cout << "x地址为:" << &x << std::endl;
	std::cout << "p的值为:" << p << std::endl;
	std::cout << "y地址为:" << &y << std::endl;
	std::cout << "q的值为:" << q << std::endl;
	std::cout << "*p的值为:" << *p << std::endl;
	std::cout << "*q的值为:" << *q << std::endl;
}
