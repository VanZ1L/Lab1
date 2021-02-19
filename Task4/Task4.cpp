#include <iostream>
using namespace std;
#include "math.h"
double x, y, f;
void fun()
{
	f = pow((cos(x) - cos(y)), 2) - pow((sin(x) - sin(y)), 2);
}
void main()
{
	cout << "x= ";
	cin >> x;
	cout << "y= ";
	cin >> y;
	fun();
	cout << "F= " << f;
}