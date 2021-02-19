#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double x, y, f;
	cout << "x= ";
	cin >> x;
	cout << "y= ";
	cin >> y;

	f = pow((cos(x) - cos(y)), 2) - pow((sin(x) - sin(y)), 2);
	cout << "F= " << f;
}