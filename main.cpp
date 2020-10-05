#include <iostream>
#include "Circle.h"
#include <fstream>
#include <string>

void testZhiZhen();
void testZhiXiangZhiZhenZhiZhen();
void testMainChuanCan(int argc, char** argv);
void testOOP();
void handleFile();

int main(int argc, char** argv)
{
	handleFile();
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

void testZhiXiangZhiZhenZhiZhen() {
	int x = 100;
	int* p = &x;
	int** q = &p;
	std::cout << "变量x的值为:" << x << std::endl;
	std::cout << "变量x的地址为:" << &x << std::endl;
	std::cout << "指针变量p指向的地址为:" << p << std::endl;
	std::cout << "指针变量p的值为:" << *p << std::endl;
	std::cout << "指针变量p的地址为:" << &p << std::endl;
	std::cout << "q的值为:" << q << std::endl;
	std::cout << "指针变量q的地址为:" << *q << std::endl;
	std::cout << "指针变量q的存储变量数值为:" << **q << std::endl;
}

void testMainChuanCan(int argc, char** argv) {
	char** temp = argv;  /* 保留argv */
	int i = 0;
	std::cout << "传入参数的长度:" << argc << std::endl;
	while (*temp != NULL) {
		std::cout << i++ << ": " << *temp << std::endl;
		++temp;
	}
}

void testOOP() {
	Circle a(10.0);
	Circle* p = &a;
	std::cout << "圆的面积为:" << a.Area() << std::endl;
	std::cout << "圆的面积为:" << p->Area() << std::endl;
	std::cout << "这个对象的地址为:" << &a << "   " << p << std::endl;
}


void handleFile() {
	std::ifstream infile;
	infile.open("D:\\test.txt");
	if (!infile.is_open()) {
		std::cerr << "文件已经打开了" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::string line;
	std::cout << "开始读取文件!" << std::endl;
	while (getline(infile, line)) {
		std::cout << "文件内容为:" << line << std::endl;
	}
	std::cout << "文件读取完毕!" << std::endl;
	infile.close();
}