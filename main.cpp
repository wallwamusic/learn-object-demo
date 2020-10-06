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
	int var = 10;
	int* ptr = &var;
	int** p = &ptr;
	std::cout << "var��" << var << std::endl;
	std::cout << "&var:" << &var << std::endl;
	std::cout << "ptr:" << ptr << std::endl;
	std::cout << "*ptr:" << *ptr << std::endl;
	std::cout << "&ptr:" << &ptr << std::endl;
	std::cout << "p:" << p << std::endl;
	std::cout << "*p:" << *p << std::endl;
	std::cout << "**p:" << **p << std::endl;
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

void testOOP() {
	Circle a(10.0);
	Circle* p = &a;
	std::cout << "Բ�����Ϊ:" << a.Area() << std::endl;
	std::cout << "Բ�����Ϊ:" << p->Area() << std::endl;
	std::cout << "�������ĵ�ַΪ:" << &a << "   " << p << std::endl;
}


void handleFile() {
	std::ifstream infile;
	infile.open("D:\\test.txt");
	if (!infile.is_open()) {
		std::cerr << "�ļ��Ѿ�����" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::string line;
	std::cout << "��ʼ��ȡ�ļ�!" << std::endl;
	while (getline(infile, line)) {
		std::cout << "�ļ�����Ϊ:" << line << std::endl;
	}
	std::cout << "�ļ���ȡ���!" << std::endl;
	infile.close();
}

void testArray()
{
	//һά����
	//int a[3];
	//a[0] = 100;
	//a[1] = 200;
	//a[2] = 300;
	//std::cout << sizeof(a) / sizeof(a[0]) << std::endl;
	//std::cout << "����洢��ַΪ:" << &a << "," << a << std::endl;
	//int* ptr = a;
	//for (int i = 0; i < 3; i++)
	//{
	//	std::cout << "��ַΪ:" << (a + i) << "ֵΪ:" << a[i] << ",ʹ��ָ��ȡֵ:" << *(ptr + i) << std::endl;
	//}

	//��ά����
	int list[3][2] = { {1,2},{3,4},{5,6} };
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 2; j++) {
	//		std::cout << "��" << i << "��,��" << j << "�е�ֵΪ:" << list[i][j] << std::endl;
	//	}
	//}

	//������ʼ��һ��ָ���ά����ڶ��е�ָ��
	int(*listPtr)[2] = list;//��Ч��int* listPtr = &list[1][0];
	std::cout << listPtr << std::endl;
	std::cout << &list[0][0] << std::endl;
	std::cout << list[0] << std::endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++) {
			std::cout << "list[" << i << "][" << j << "]�ĵ�ַΪ:" << &list[i][j] << ",listPtr:" <<
				&listPtr[i][j] << "��" << i << "��,��" << j << "�е�ֵΪ:" << *((*listPtr + i) + j) << std::endl;
		}
	}
	//std::cout << "��1�е�2�е�ֵΪ:" << *(listPtr + 1) << std::endl;
	//++listPtr;
	//std::cout << "��2�е�2�е�ֵΪ:" << *(listPtr + 1) << std::endl;
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
	std::cout << "��������:" << argc << std::endl;
	std::string s;
	++argv;
	for (int i = 1; i < argc; i++) {
		std::cout << *argv << std::endl;
		s = s + *argv + " ";
		++argv;
	}
	std::cout << "��������ϸ����Ϊ:" << s << std::endl;
}
