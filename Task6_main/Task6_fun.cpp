#include "math.h"
double x, y, f;
void fun()
{
	f = pow((cos(x) - cos(y)), 2) - pow((sin(x) - sin(y)), 2);
}