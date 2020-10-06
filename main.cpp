#include <iostream>
#include "Circle.h"
#include <fstream>
#include <string>

void testZhiZhen();
void testZhiXiangZhiZhenZhiZhen();
void testMainChuanCan(int argc, char** argv);
void testOOP();
void handleFile();
void testArray();
void testPointerCanShu();
void testMianCanShu(int argc, char** argv);

int main(int argc, char** argv)
{
	testArray();
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
	int var = 10;
	int* ptr = &var;
	int** p = &ptr;
	std::cout << "var：" << var << std::endl;
	std::cout << "&var:" << &var << std::endl;
	std::cout << "ptr:" << ptr << std::endl;
	std::cout << "*ptr:" << *ptr << std::endl;
	std::cout << "&ptr:" << &ptr << std::endl;
	std::cout << "p:" << p << std::endl;
	std::cout << "*p:" << *p << std::endl;
	std::cout << "**p:" << **p << std::endl;
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

void testArray()
{
	//一维数组
	//int a[3];
	//a[0] = 100;
	//a[1] = 200;
	//a[2] = 300;
	//std::cout << sizeof(a) / sizeof(a[0]) << std::endl;
	//std::cout << "数组存储地址为:" << &a << "," << a << std::endl;
	//int* ptr = a;
	//for (int i = 0; i < 3; i++)
	//{
	//	std::cout << "地址为:" << (a + i) << "值为:" << a[i] << ",使用指针取值:" << *(ptr + i) << std::endl;
	//}

	//二维数组
	int list[3][2] = { {1,2},{3,4},{5,6} };
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 2; j++) {
	//		std::cout << "第" << i << "行,第" << j << "列的值为:" << list[i][j] << std::endl;
	//	}
	//}

	//声明初始化一个指向二维数组第二行的指针
	int(*listPtr)[2] = list;//等效于int* listPtr = &list[1][0];
	std::cout << listPtr << std::endl;
	std::cout << &list[0][0] << std::endl;
	std::cout << list[0] << std::endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++) {
			std::cout << "list[" << i << "][" << j << "]的地址为:" << &list[i][j] << ",listPtr:" <<
				&listPtr[i][j] << "第" << i << "行,第" << j << "列的值为:" << *((*listPtr + i) + j) << std::endl;
		}
	}
	//std::cout << "第1行第2列的值为:" << *(listPtr + 1) << std::endl;
	//++listPtr;
	//std::cout << "第2行第2列的值为:" << *(listPtr + 1) << std::endl;
}

void testPointerCanShu() {
	char mes[2][11] = { {"helloworld"},{"ilovechina"} };
	char* ptr = mes[0];
	std::cout << "&mes:" << &mes << std::endl;
	std::cout << "ptr:" << ptr + 11 << std::endl;
	std::cout << "*ptr:" << *ptr << std::endl;
}

void testMianCanShu(int argc, char** argv)
{
	std::cout << "参数个数:" << argc << std::endl;
	std::string s;
	++argv;
	for (int i = 1; i < argc; i++) {
		std::cout << *argv << std::endl;
		s = s + *argv + " ";
		++argv;
	}
	std::cout << "命令行详细参数为:" << s << std::endl;
}
