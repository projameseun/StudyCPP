#include <iostream>

using namespace std;

class Rectangle
{
public:
	int width;
	int height;

public:
	int getArea();	//����
};



int main()
{

	Rectangle rect;
	rect.width = 3;
	rect.height = 5;


	cout << "������:" << rect.getArea() << endl;

	getchar();
	return 0;
}

int Rectangle::getArea()
{
	return width * height;
}
