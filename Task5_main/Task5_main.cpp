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