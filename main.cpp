#include <iostream>
void testZhiZhen();
void testZhiXiangZhiZhenZhiZhen();
void testMainChuanCan(int argc, char** argv);

int main(int argc, char** argv)
{
	testMainChuanCan(argc, argv);
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

void testZhiXiangZhiZhenZhiZhen() {
	int x = 100;
	int* p = &x;
	int** q = &p;
	std::cout << "����x��ֵΪ:" << x << std::endl;
	std::cout << "����x�ĵ�ַΪ:" << &x << std::endl;
	std::cout << "ָ�����pָ��ĵ�ַΪ:" << p << std::endl;
	std::cout << "ָ�����p��ֵΪ:" << *p << std::endl;
	std::cout << "ָ�����p�ĵ�ַΪ:" << &p << std::endl;
	std::cout << "q��ֵΪ:" << q << std::endl;
	std::cout << "ָ�����q�ĵ�ַΪ:" << *q << std::endl;
	std::cout << "ָ�����q�Ĵ洢������ֵΪ:" << **q << std::endl;
}


void testMainChuanCan(int argc, char** argv) {
	char** temp = argv;  /* ����argv */
	int i = 0;
	std::cout << "��������ĳ���:" << argc << std::endl;
	while (*temp != NULL) {
		std::cout << i++ << ": " << *temp << std::endl;
		++temp;
	}
}