#include <iostream>
using namespace std;
int main()
{
	string c;
	int m;
	int h[m];
	cin >> c >> m;
	for(int i = 0; i < m; i++){
		cin >> h[i];
		if(h[i] == 45)break;
	}
	/**
	for(int i = 0; i < m; i++){
		string div = c.substr(0, h[i]);
		c += div;
	}
	cout << c << endl;
	*/
	return 0;
}