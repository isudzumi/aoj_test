#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	double x1, x2, y1, y2, r2, r;
	cin >> x1 >> y1 >> x2 >> y2;
	r2 = ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2));
	r = sqrt(r2);
	cout << r << endl;
	return 0;
}