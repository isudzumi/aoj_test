#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	string w, s;
	cin >> w;
	transform(w.begin(), w.end(), w.begin(), ::tolower);
	int n = 0;
	while(1){
		cin >> s;
		if(s == "END_OF_TEXT")break;
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		if(s == w)n++;
	}
	cout << n << endl;
	return 0;
}