#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int q, a, b;
	cin >> q;
	string com;
	for(int i = 0; i < q; i++){
		cin >> com >> a >> b;
		if(com == "print"){
			str = str.substr(a, b-a+1);
			cout << str << endl;
		}else if(com == "reverse"){
			string rev = str;
			for(int j = 0; j <= b-a; j++){
				str[a+j] = rev[b-j];
			}
		}else if(com == "replace"){
			string p;
			cin >> p;
			str.replace(a, b-a+1, p);
		}	
	}
	return 0;
}