#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v(10, 0);
	vector<int>::iterator itr;
	itr = v.begin();
	itr += 3;
	*itr = 100;
	for(itr = v.begin(); itr != v.end(); ++itr)
		cout << *itr << " ";
	cout << endl;
	return 0;
}
