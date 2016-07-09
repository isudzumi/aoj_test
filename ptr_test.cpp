#include<iostream>
using namespace std;

int main()
{
	int a[5] = {1, 2, 3, 4, 5};
	int *p;
	for(p = a; p != &a[5]; ++p)
		cout << *p << " ";
	cout << endl;
	p = a;
	p = p+4;
	cout << *p << endl;
	return 0;
}
