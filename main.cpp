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