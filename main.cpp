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
	std::cout << "x��y��ֵδ����֮ǰ��ֵΪ" << std::endl;
	std::cout << "x��ֵΪ:" << x << std::endl;
	std::cout << "y��ֵΪ:" << y << std::endl;
	std::cout << "x��ַΪ:" << &x << std::endl;
	std::cout << "p��ֵΪ:" << p << std::endl;
	std::cout << "y��ַΪ:" << &y << std::endl;
	std::cout << "q��ֵΪ:" << q << std::endl;
	std::cout << "*p��ֵΪ:" << *p << std::endl;
	std::cout << "*q��ֵΪ:" << *q << std::endl;
	//����ֵ,ͨ��ָ��,���������Ҫ����������ֵ����C++����Ҫʹ��ָ����ܽ��н���
	*p = 200;
	*q = 100;
	std::cout << "x��y��ֵ����֮���ֵ:" << std::endl;
	std::cout << "x��ֵΪ:" << x << std::endl;
	std::cout << "y��ֵΪ:" << y << std::endl;
	std::cout << "x��ַΪ:" << &x << std::endl;
	std::cout << "p��ֵΪ:" << p << std::endl;
	std::cout << "y��ַΪ:" << &y << std::endl;
	std::cout << "q��ֵΪ:" << q << std::endl;
	std::cout << "*p��ֵΪ:" << *p << std::endl;
	std::cout << "*q��ֵΪ:" << *q << std::endl;
}
