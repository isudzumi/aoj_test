#include <iostream>
using namespace std;

int main()
{
	string str;
	while(cin >> str){
		if(str == "0")break;
		int n = 0;
		for(int i = 0; i < str.size(); i++){
			n += str[i] - 48;
		}
		cout << n << endl;
	}
	return 0;
}