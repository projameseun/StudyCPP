#include <iostream>

using namespace std;
//생성자에서 다른 생성자 호출연습(위임 생성자 만들기연습)

class Circle
{
public:
	int radius;
public:
	Circle();	//위임생성자
	Circle(int r);	//타켓생성자
	double getArea();
};







int main()
{
	Circle donut;	//매개변수없는 생성자를 호출(위임생성자호출)
	double area = donut.getArea();

	cout << "donut 면적은 " << area << endl;

	Circle Pizza(30);	//매개변수 있는생성자 호출
	area = Pizza.getArea();

	cout << "pizza 면적은 " << area << endl;

	getchar();
}

Circle::Circle() : Circle(1){}	//위임생성자

Circle::Circle(int r)	//타켓생성자
{
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}
