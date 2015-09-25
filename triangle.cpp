#include<iostream>
#include<cmath>
using namespace std;
#define pi 3.14159265

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	double s, l, h;
	h = static_cast<double>( b * sin(pi/180*c));
	s = static_cast<double>( a * h / 2);
	l = static_cast<double>(a + b + sqrt((a*a)+(b*b)-(2*a*b*cos(pi/180*c))));
	cout << fixed << s << endl;
	cout << fixed << l << endl;
	cout << fixed << h << endl;
	return 0;
}