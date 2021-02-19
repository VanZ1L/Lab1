#include <iostream>
#include <math.h>
using namespace std;
double fun(double a, double b);
void main()
{
	double x, y, f;
	cout << "x= ";
	cin >> x;
	cout << "y= ";
	cin >> y;

	f = fun(x, y);
	cout << "F= " << f;
}
double fun(double a, double b)
{
	return  pow((cos(a) - cos(b)), 2) - pow((sin(a) - sin(b)), 2);
}