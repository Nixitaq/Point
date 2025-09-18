#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
	Point obj;
	obj.Print();

	Point obj1(10, 20);
	obj1.Print();

	obj1.Init();
	obj1.Print();
}