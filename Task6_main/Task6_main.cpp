#include <iostream>
using namespace std;
#include "math.h"
void fun();
extern double x, y, f;
void main()
{
	cout << "x= ";
	cin >> x;
	cout << "y= ";
	cin >> y;
	fun();
	cout << "F= " << f;
}