#include <iostream>

using namespace std;

class Circle
{
public:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
	
};


int main()
{
	Circle donut;	//매개변수없는 생성자 호출
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza(30);	//매개 변수 있는 생성자 호출 30이 r로 전달됨
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;

	getchar();

}

Circle::Circle()
{
	radius = 1;//반지름값초기화
	cout << "반지름 :" << radius << " 원 생성" << endl;

}

Circle::Circle(int r)
{
	radius = r;	//반지름값초기화
	cout << "반지름 :" << radius << " 원 생성" << endl;

}

Circle::~Circle()
{
}

double Circle::getArea()
{

	return 3.14*radius*radius;
}
