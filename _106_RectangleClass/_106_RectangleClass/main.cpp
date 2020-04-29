#include <iostream>

using namespace std;

class Rectangle
{
public:
	int width;
	int height;

public:
	int getArea();	//면적
};



int main()
{

	Rectangle rect;
	rect.width = 3;
	rect.height = 5;


	cout << "면적은:" << rect.getArea() << endl;

	getchar();
	return 0;
}

int Rectangle::getArea()
{
	return width * height;
}
