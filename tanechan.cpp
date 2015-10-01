#include <iostream>
using namespace std;

int main()
{
	string s;
	string p;
	cin >> s >> p;
	s += s;
	int loc = s.find(p, 0);
	if(loc != string::npos)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	
	return 0;
}