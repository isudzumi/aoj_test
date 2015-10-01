#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double a, b, c, S, L, h;
	cin >> a >> b >> c;
	S = a * b * sin(c*3.14159265/180) / 2;
	L = a + b + sqrt(a*a + b*b);
	h = b * sin(c * 3.14159265/180);
	cout << S << endl;
	cout << L << endl;
	cout << h << endl;
	return 0;
}