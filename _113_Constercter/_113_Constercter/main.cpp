#include <iostream>

using namespace std;
//�����ڿ��� �ٸ� ������ ȣ�⿬��(���� ������ ����⿬��)

class Circle
{
public:
	int radius;
public:
	Circle();	//���ӻ�����
	Circle(int r);	//Ÿ�ϻ�����
	double getArea();
};







int main()
{
	Circle donut;	//�Ű��������� �����ڸ� ȣ��(���ӻ�����ȣ��)
	double area = donut.getArea();

	cout << "donut ������ " << area << endl;

	Circle Pizza(30);	//�Ű����� �ִ»����� ȣ��
	area = Pizza.getArea();

	cout << "pizza ������ " << area << endl;

	getchar();
}

Circle::Circle() : Circle(1){}	//���ӻ�����

Circle::Circle(int r)	//Ÿ�ϻ�����
{
	radius = r;
	cout << "������ " << radius << " �� ����" << endl;
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}
