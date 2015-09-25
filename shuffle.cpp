#include<iostream>
using namespace std;

int main()
{
	while(1){
		string c;
		int m, h;
		cin >> c;
		if(c == "-")break;
		cin >> m;
		for(int i = 0; i < m; i++){
			cin >> h;
			string div = c.substr(0, h);
			c.erase(0, h);
			c += div;
		}
		cout << c << endl;
	}
	return 0;
}
